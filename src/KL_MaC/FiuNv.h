#pragma once

#include <QGroupBox>
#include <QTableWidget>
#include <QCheckBox>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QUdpSocket>
#include <QHeaderView>
#include <QMessageBox>
#include <QLabel>
#include <QThread>

#include <Winsock2.h>
#include <Windows.h>

#include "common.h"
#include "we_types.h"

//https://blog.csdn.net/polokang/article/details/6696982

//
//����ע���� 
//
//

class macFiuNv : public QGroupBox
{
	Q_OBJECT

public:
	macFiuNv(QGroupBox *parent = 0);
	~macFiuNv();

	McuInfo_t	mcu;
	void mcuInfoTable();
	bool IpCheck(QString ip);
	void SetIpChange();

signals:
	void giveQueryIp(u8 *ip, u16 p);

public slots:
	void EmitQuerySig();
	void setVal(int type, void *);

	void relayactive();
	void relayclear(int check);
	void ipChange(int row, int col);

private:
	QLabel			*v1G;
	QLabel			*v1G_val;
	QLabel			*v12;
	QLabel			*v12_val;
	QLabel			*v34;
	QLabel			*v34_val;
	QLabel			*v56;
	QLabel			*v56_val;
	QLabel			*hall;
	QLabel			*hall_val;
	QPushButton		*activeButt;

	QTableWidget	*relaytable;
	QPushButton		*relaytableButt;
	QCheckBox		*cleartableButt;

	QTableWidget	*mcutable;
	bool			isUserModifyCellSignal = true;//��ʶ ��Ϣ���/mcu�鲥��Ϣ�仯������ �����û�����ip�ȷ����� ��Ԫ�����ݸı��ź�
	u8				nIP[4];
	u8				nGw[4];
	u8				nPort[2];
	u8				nNm[4];

	QVBoxLayout		*vbox;
	QHBoxLayout		*hLayout;

	queryThread     *queryTh;
};


