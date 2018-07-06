#include "main_widget.h"
#include "shadow_widget.h"
#include "common.h"
#include <QDebug>

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
	//TODO 待改为线程模式，此方式阻塞了界面
	MulcastListen = new macUdpMulcast;
	connect(MulcastListen, SIGNAL(signalNewLeaf(void *)), systree, SLOT(MakeRemoteLeaf(void*)));
	connect(MulcastListen, SIGNAL(signalNewWidget(void *)), this, SLOT(makeDevWidget(void*)));
	
	//界面布局等
	QHBoxLayout *pHlayout = new QHBoxLayout();
	pHlayout->addWidget(systree);
	pHlayout->addWidget(showStack);

	QVBoxLayout *pLayout = new QVBoxLayout(this);
	pLayout->addWidget(title_widget);
	//pLayout->setContentsMargins(SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH);//左、上、右、下的外边距可以设置为不同的值
	//pLayout->addWidget(systree);
	pLayout->addLayout(pHlayout);
	pLayout->addStretch();//伸缩空间
						  //pLayout->setMargin(SHADOW_WIDTH);//左、上、右、下的外边距可以设置为相同的值

	setLayout(pLayout);
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


