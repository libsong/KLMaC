#include "main_widget.h"
#include "shadow_widget.h"
#include "common.h"
#include <QDebug>

QList<QString> g_disText;

macMainWidget::macMainWidget(QWidget *parent)
	: macShadowWidget(parent)
{
	qDebug("main widget start ...\n");

	setMinimumSize(900, 600);
	setWindowIcon(QIcon(":/KL_MaC/klmac_ico"));

	//title
	title_widget = new macTitleWidget();
	installEventFilter(title_widget);
	setWindowTitle("KL MaC - Manager & Control");
	setWindowIcon(QIcon(":/KL_MaC/klmac_ico"));

	//控制操作等,多页面切换
	showStack = new QStackedWidget(this);

	//本机信息显示表格
	localInfo = new macLocalInfo();
	showStack->addWidget(localInfo);

	//tree
	systree = new macTreeSys();
	connect(systree, SIGNAL(GiveLocalInfo(int, int, int, const QString &)), localInfo, SLOT(addNewItem(int, int, int, const QString &)));
	connect(systree, SIGNAL(showStackWidgetLocal()), this, SLOT(switchPageLocal()));
	connect(systree, SIGNAL(showStackWidget(McuInfo_t *)), this, SLOT(switchPage(McuInfo_t *)));
	systree->GetLocalInfo();

	//组播接收发现
	MulcastListen = new macUdpMulcast;
	connect(MulcastListen, SIGNAL(signalNewLeaf(void *)), systree, SLOT(MakeRemoteLeaf(void*)));
	connect(MulcastListen, SIGNAL(signalNewWidget(void *)), this, SLOT(makeDevWidget(void*)));
	
	//信息显示窗
	m_dis = new QTextBrowser;
	m_dis->moveCursor(QTextCursor::End);
	m_dis->verticalScrollBar()->setValue(m_dis->verticalScrollBar()->maximum());//滚动条最底
	m_dis->document()->setMaximumBlockCount(2000); //设置最大行数

	/*SubThread *t = new SubThread;
	SubThread3* t3 = new SubThread3(this);
	connect(t, SIGNAL(giveDis(QString)), this, SLOT(disTextBrower(QString)));
	t3->start();*/

	//界面布局等
	QHBoxLayout *pHlayout = new QHBoxLayout();
	pHlayout->addWidget(systree);
	pHlayout->addWidget(showStack);

	QVBoxLayout *pLayout = new QVBoxLayout(this);
	pLayout->addWidget(title_widget,0);
	//pLayout->setContentsMargins(SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH);//左、上、右、下的外边距可以设置为不同的值
	//pLayout->addWidget(systree);
	pLayout->addLayout(pHlayout,1);
	pLayout->addSpacing(5);
	pLayout->addWidget(m_dis,1);
						  //pLayout->setMargin(SHADOW_WIDTH);//左、上、右、下的外边距可以设置为相同的值

	setLayout(pLayout);

	g_disText << weChinese2LocalCode("KL Mac Start .");
}

macMainWidget::~macMainWidget()
{
	delete title_widget;
}

void macMainWidget::switchPageLocal(void)
{
	qDebug() << "switchPageLocal";
	showStack->setCurrentIndex(0);
}

void macMainWidget::switchPage(McuInfo_t *val)
{
	//int nCount = showStack->count();
	//qDebug("get signal showStackWidget.nCount:%d", nCount);
	////int nIndex = showStack->currentIndex();
	//// 当需要显示的页面索引大于等于总页面时，切换至首页
	//if (nIndex >= nCount)
	//	nIndex = 0;

	McuInfo_t tmp;
	memcpy(&tmp,val,sizeof(McuInfo_t));

	if (tmp.devType == 0x0100)
	{
		ppb->mcu = tmp;
		ppb->mcuInfoTable();
		showStack->setCurrentIndex(ppbWidgetIndex); 
	}	

	if (tmp.devType == 0x0200)
	{
		fiu->mcu = tmp;
		fiu->mcuInfoTable();
		showStack->setCurrentIndex(fiuWidgetIndex);
	}

	if (tmp.devType == 0x0300)
	{
		hvs->mcu = tmp;
		hvs->mcuInfoTable();
		showStack->setCurrentIndex(hvsWidgetIndex); 
	}
}

void macMainWidget::makeDevWidget(void *info)
{
	McuInfo_t tmp;
	memcpy(&tmp,info,sizeof(McuInfo_t));

	if (tmp.devType == 0x0100) 
	{
		if (ppb == NULL)
		{
			ppb = new macPowerSupplyBox;
			ppb->mcu = tmp;
			ppb->mcuInfoTable();

			showStack->addWidget(ppb);
			ppbWidgetIndex = showStack->count() -1;
			qDebug() << "!!!!! ppbWidgetIndex = " << ppbWidgetIndex;
		}
	}

	if (tmp.devType == 0x0200)
	{
		if (fiu == NULL)
		{
			fiu = new macFiuNv;
			fiu->mcu = tmp;
			fiu->mcuInfoTable();

			showStack->addWidget(fiu);
			fiuWidgetIndex = showStack->count() - 1;
			qDebug() << "!!!!! fiuWidgetIndex = " << fiuWidgetIndex;
		}
	}

	if (tmp.devType == 0x0300)
	{
		if (hvs == NULL)
		{
			hvs = new macHighValtage;
			hvs->mcu = tmp;
			hvs->mcuInfoTable();

			showStack->addWidget(hvs);
			hvsWidgetIndex = showStack->count() - 1;
			qDebug() << "!!!!! hvsWidgetIndex = " << hvsWidgetIndex;
		}
	}
}

void macMainWidget::disTextBrower(QString dis)
{
	QString strDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss ddd");
	QString strMsg = strDateTime + " : " + dis;

	//m_dis->insertPlainText(strMsg);
	m_dis->append(strMsg);

	//m_dis->setTextColor(QColor("red"));
	//m_dis->setTextBackgroundColor(QColor("gray"));
}

void disTextBrowerTh::run()
{
	while (1)
	{
		if (!g_disText.isEmpty())
		{
			for (size_t i = 0; i < g_disText.size(); i++)
			{
				emit toDisTextSlot(g_disText.at(i));
				g_disText.removeAt(i);
				qDebug() << "disTextBrowerTh in";
			}
		}		

		msleep(2);
	}
}

// slot function connected to obj's someSignal 
void SubThread::someSlot()
{
	emit this->giveDis("thread ");

	QString msg;
	msg.append(this->metaObject()->className());
	msg.append("::obj's thread is ");
	if (obj->thread() == qApp->thread())
	{
		msg.append("MAIN thread;");
	}
	else if (obj->thread() == this)
	{
		msg.append("SUB thread;");
	}
	else
	{
		msg.append("OTHER thread;");
	}
	msg.append(" someSlot executed in ");
	if (QThread::currentThread() == qApp->thread())
	{
		msg.append("MAIN thread;");
	}
	else if (QThread::currentThread() == this)
	{
		msg.append("SUB thread;");
	}
	else
	{
		msg.append("OTHER thread;");
	}
	qDebug() << msg;
	//quit();
}

SubThread3::SubThread3(QObject* parent)
	: SubThread(parent)
{
	obj = 0;
}

// reimplement run   
void SubThread3::run()
{
	obj = new SomeObject();
	connect(obj, SIGNAL(someSignal()), this, SLOT(someSlot()));
	/*obj->callEmitSignal();
	exec();*/

	while (1)
	{
		obj->callEmitSignal();
		sleep(1);
	}
}
