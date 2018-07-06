#pragma once

#include <QtWidgets/QWidget>
#include <QIcon>
#include <QStackedWidget>

#include "shadow_widget.h"
#include "title_widget.h"
#include "menu_button.h"
#include "tree_sys.h"
#include "LocalWidget.h"
#include "PowerSupplyBox.h"
#include "HighValtage.h"
#include "udp_mulcast.h"
#include "we_types.h"

class macMainWidget : public macShadowWidget
{
	Q_OBJECT

public:
	explicit macMainWidget(QWidget *parent = Q_NULLPTR);
	~macMainWidget();

public slots:
	void switchPageLocal(void);
	void switchPage(McuInfo_t *val);
	void makeDevWidget(void *info);

signals:
	void testsignal(void*);
	void sendIpPort(const QString &ip,unsigned short port);

private:

	macTitleWidget 		*title_widget; //������
	macTreeSys			*systree;
	QStackedWidget		*showStack;

	macLocalInfo		*localInfo;
	//�豸widget��
	macPowerSupplyBox	*ppb = NULL;	//��Դ������ PowerSupplyBox 0x0100	
	int					ppbWidgetIndex = 0;
	macHighValtage   	*hvs = NULL;	//��ѹģ���� PowerSupplyBox 0x0300	
	int					hvsWidgetIndex = 0;

	macUdpMulcast		*MulcastListen;

	//ContentWidget 		*content_widget; //����������
	//SystemTray 			*system_tray; //������
	//AboutUsDialog 		*about_us_dialog; //�������ǽ���
	//QString 			skin_name;//�����ڱ���ͼƬ������
	bool 				is_running;
	
};
















































