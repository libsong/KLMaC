#pragma once

#include <QUdpSocket>
#include <QThread>
#include <QObject>
#include <QMutex>
#include <QMessageBox>
#include <QNetworkConfigurationManager>

#include <WinSock2.h>
#include <iphlpapi.h>

#include "common.h"
#include "we_types.h"

#define UDPMULCASTRECV_IP "225.226.227.228"
#define UDPMULCASTRECV_PORT 54345

#if 1
class macUdpMulcast : public QThread
{
	Q_OBJECT

public:
	macUdpMulcast();
	~macUdpMulcast();

	void getAdapterInfoWithWindows();
	void macUdp_send(const QString &ip,int port, QByteArray *data);

signals:
	void signalNewLeaf(void *mcu);
	void signalNewWidget(void *mcu);

public slots:
	void receiveMul();

private:
	QUdpSocket *uMulSocket;

};

#endif










