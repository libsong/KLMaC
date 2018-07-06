#include <QApplication>
#include <QTextCodec>
#include <QSharedMemory>
#include <QSplashScreen>
#include <QDateTime>
#include <QDir>

#include "main_widget.h"
#include "CCrashStack.h"
 

#ifdef Q_OS_WIN
long __stdcall   callback(_EXCEPTION_POINTERS*   excp)
{
	CCrashStack crashStack(excp);
	QString sCrashInfo = crashStack.GetExceptionInfo();

	QString file_path = QCoreApplication::applicationDirPath();

	QDir *folder_path = new QDir;
	bool exist = folder_path->exists(file_path.append("\\MyApp"));
	if (!exist)
	{
		folder_path->mkdir(file_path);
	}
	delete folder_path;
	folder_path = nullptr;

	QString sFileName = file_path + "\\crash.log";

	QFile file(sFileName);
	if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
	{
		file.write(sCrashInfo.toUtf8());
		file.close();
	}

	return   EXCEPTION_EXECUTE_HANDLER;
}
#endif

int main(int argc, char *argv[])
{
#ifdef Q_OS_WIN
#ifdef _DEBUG
	SetUnhandledExceptionFilter(callback);
#endif // DEBUG	
#endif

	QApplication a(argc, argv);

	QTextCodec *codec = QTextCodec::codecForName("System");
	QTextCodec::setCodecForLocale(codec);
	
	//ʹ��QSharedMemory��ֹ�࿪  
	QSharedMemory shared_memory;
	shared_memory.setKey(QString("main_window"));
	if (shared_memory.attach())
	{
		return 0;
	}

	if (shared_memory.create(1))
	{
		//��������
		QPixmap pixmap(":/KL_MaC/Resources/img/load/loading.png");
		QSplashScreen screen(pixmap);
		screen.showMessage(weChinese2LocalCode("���������У����Ժ�..."), Qt::AlignTop | Qt::AlignRight, Qt::red);
		screen.show();		
		QDateTime n = QDateTime::currentDateTime();
		QDateTime now;
		do {
			now = QDateTime::currentDateTime();
			a.processEvents();
		} while (n.secsTo(now) <= 1);//5Ϊ��Ҫ��ʱ������

		//������
		macMainWidget w;
		w.show();

		screen.finish(&w);//���������ڴ���w��������Ժ����  
#ifdef _DEBUG
		_asm   int   3   //ֻ��Ϊ���ó������,����ץdump�ļ�
#endif
		return a.exec();
	}
}
