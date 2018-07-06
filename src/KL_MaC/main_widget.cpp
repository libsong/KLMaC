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

	//���Ʋ�����,��ҳ���л�
	showStack = new QStackedWidget(this);

	//������Ϣ��ʾ���
	localInfo = new macLocalInfo();
	showStack->addWidget(localInfo);

	//tree
	systree = new macTreeSys();
	connect(systree, SIGNAL(GiveLocalInfo(int, int, int, const QString &)), localInfo, SLOT(addNewItem(int, int, int, const QString &)));
	connect(systree, SIGNAL(showStackWidgetLocal()), this, SLOT(switchPageLocal()));
	connect(systree, SIGNAL(showStackWidget(McuInfo_t *)), this, SLOT(switchPage(McuInfo_t *)));
	systree->GetLocalInfo();

	//�鲥���շ���
	//TODO ����Ϊ�߳�ģʽ���˷�ʽ�����˽���
	MulcastListen = new macUdpMulcast;
	connect(MulcastListen, SIGNAL(signalNewLeaf(void *)), systree, SLOT(MakeRemoteLeaf(void*)));
	connect(MulcastListen, SIGNAL(signalNewWidget(void *)), this, SLOT(makeDevWidget(void*)));
	
	//���沼�ֵ�
	QHBoxLayout *pHlayout = new QHBoxLayout();
	pHlayout->addWidget(systree);
	pHlayout->addWidget(showStack);

	QVBoxLayout *pLayout = new QVBoxLayout(this);
	pLayout->addWidget(title_widget);
	//pLayout->setContentsMargins(SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH, SHADOW_WIDTH);//���ϡ��ҡ��µ���߾��������Ϊ��ͬ��ֵ
	//pLayout->addWidget(systree);
	pLayout->addLayout(pHlayout);
	pLayout->addStretch();//�����ռ�
						  //pLayout->setMargin(SHADOW_WIDTH);//���ϡ��ҡ��µ���߾��������Ϊ��ͬ��ֵ

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
	//// ����Ҫ��ʾ��ҳ���������ڵ�����ҳ��ʱ���л�����ҳ
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


