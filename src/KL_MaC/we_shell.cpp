#include "we_shell.h"

#include <QLineEdit>  
#include <QTextBlock>  
#include <QDebug>  


macShell::macShell(QWidget *parent) :
	QPlainTextEdit(parent)
{
	setReadOnly(true);
	setWindowOpacity(0.9);//透明度
	setMinimumSize(600,400);
	setWindowTitle(weChinese2LocalCode("KL-MaC 远程命令行交互工具"));

	QFont font = this->font();
	//font.setPointSize(font.pointSize() + 2);
	font.setPointSize(font.pointSize());
	this->setFont(font);

	appendPlainText(">>> ");
	edit = new QLineEdit(this->viewport());
	edit->setStyleSheet("border-style:none; background-color:transparent;");

	connect(edit, SIGNAL(returnPressed()), SLOT(onEditFinished()));
	connect(verticalScrollBar(), SIGNAL(valueChanged(int)), SLOT(onScrollBarValueChanged()));
}

macShell::~macShell()
{

}

void macShell::resizeEvent(QResizeEvent *e)
{
	updateEditPosition();
}

void macShell::onScrollBarValueChanged()
{
	updateEditPosition();
}

QString macShell::runCommand(const QString &cmd)
{  
	return QString("Result of %1").arg(cmd); 
}

void macShell::saveSshObjInf(QString ip, QString usr, QString pwd)
{
	QString title = weChinese2LocalCode("KL-MaC 远程命令行交互工具");
	title = title + "~" + ip + " : " + usr;
	setWindowTitle(title);

	m_ip = ip;
	m_usr = usr;
	m_pwd = pwd;
}

void macShell::onEditFinished()
{
	QString cmd = edit->text();
	if (cmd.isEmpty()) {
		return;
	}
	moveCursor(QTextCursor::End);
	insertPlainText(cmd);
	edit->hide();
	edit->clear();

	appendPlainText(runCommand(cmd));

	appendPlainText(">>> ");
	updateEditPosition();
	edit->show();
	edit->setFocus();
}

void macShell::updateEditPosition()
{
	resize(this->size());
	QRect rect = cursorRect();
	int scrollWidth = verticalScrollBar()->width();
	edit->resize(this->width() - rect.topRight().x() - scrollWidth, edit->height());
	edit->move(rect.topRight());

	//QPlainTextEditPrivate * d = reinterpret_cast<QPlainTextEditPrivate*>(qGetPtrHelper(d_ptr));
	//QRectF rect = d->control->blockBoundingRect(d->control->document()->lastBlock());
	//edit->move(rect.topRight().toPoint());
	//edit->resize(viewport()->size().width(), edit->size().height());
}