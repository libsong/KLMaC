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

	macTitleWidget 		*title_widget; //标题栏
	macTreeSys			*systree;
	QStackedWidget		*showStack;

	macLocalInfo		*localInfo;
	//设备widget类
	macPowerSupplyBox	*ppb = NULL;	//电源分配箱 PowerSupplyBox 0x0100	
	int					ppbWidgetIndex = 0;
	macHighValtage   	*hvs = NULL;	//高压模拟器 PowerSupplyBox 0x0300	
	int					hvsWidgetIndex = 0;

	macUdpMulcast		*MulcastListen;

	//ContentWidget 		*content_widget; //主界面内容
	//SystemTray 			*system_tray; //托盘项
	//AboutUsDialog 		*about_us_dialog; //关于我们界面
	//QString 			skin_name;//主窗口背景图片的名称
	bool 				is_running;
	
};
















































