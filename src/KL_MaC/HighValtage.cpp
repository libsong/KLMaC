#include "HighValtage.h"

macHighValtage::macHighValtage(QGroupBox *parent)
	: QGroupBox(parent)
{
	this->setTitle(weChinese2LocalCode("控制与管理"));

	QGroupBox *act = new QGroupBox;
	QGroupBox *relay_grp = new QGroupBox;
	QGroupBox *mag = new QGroupBox(weChinese2LocalCode("双击IP区域单元格可修改设备信息"));

	v1G = new QLabel(tr("VR12(V)"));
	v1G_val = new QLabel; v1G_val->setNum(0.0); v1G_val->setStyleSheet("color:red");
	
	v12 = new QLabel(tr("V12(V)"));
	v12_val = new QLabel; v12_val->setNum(0.0); v12_val->setStyleSheet("color:red");

	v34 = new QLabel(tr("V34(V)"));
	v34_val = new QLabel; v34_val->setNum(0.0); v34_val->setStyleSheet("color:red");

	v56 = new QLabel(tr("V56(V)"));
	v56_val = new QLabel; v56_val->setNum(0.0); v56_val->setStyleSheet("color:red");

	hall = new QLabel(tr("HALL(A)"));
	hall_val = new QLabel; hall_val->setNum(0.0); hall_val->setStyleSheet("color:red");

	activeButt = new QPushButton(weChinese2LocalCode("点击获取电压电流"));
	activeButt->setEnabled(true);
	activeButt->setFixedWidth(100);

	queryTh = new queryThread;
	connect(activeButt, SIGNAL(clicked()), this, SLOT(EmitQuerySig()));
	connect(queryTh,SIGNAL(giveQueryedVal(int, void *)),this,SLOT(setVal(int,void *)));
	

	hLayout = new QHBoxLayout;
	hLayout->addWidget(v1G);
	hLayout->addWidget(v1G_val);
	hLayout->addWidget(v12);
	hLayout->addWidget(v12_val);
	hLayout->addWidget(v34);
	hLayout->addWidget(v34_val);
	hLayout->addWidget(v56);
	hLayout->addWidget(v56_val);
	hLayout->addWidget(hall);
	hLayout->addWidget(hall_val);
	hLayout->addWidget(activeButt);
	hLayout->setMargin(10);
	hLayout->setSpacing(2);
	act->setLayout(hLayout);

	//
	relaytableButt = new QPushButton(weChinese2LocalCode("激活配置"));
	relaytableButt->setEnabled(true);
	relaytableButt->setFixedWidth(150);
	connect(relaytableButt, SIGNAL(clicked()), this, SLOT(relayactive())); 

	cleartableButt = new QCheckBox(weChinese2LocalCode("点击取消选中所有Relay"));
	cleartableButt->setChecked(true);
	connect(cleartableButt, SIGNAL(stateChanged(int)), this, SLOT(relayclear(int)));

	relaytable = new QTableWidget;
	relaytable->setColumnCount(8);
	relaytable->setRowCount(11);
	relaytable->setShowGrid(true);
	QHeaderView *head = relaytable->verticalHeader();
	//head->setHidden(true);
	//head = relaytable->horizontalHeader();
	//head->setHidden(true);
	//relaytable->horizontalHeader()->setStretchLastSection(false);
	//relaytable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	head = relaytable->horizontalHeader();
	head->setSectionResizeMode(QHeaderView::Stretch);

	QStringList lst;
	int relaytable_row = 1;
	for (int i= 0;i<11;i++)
	{
		char buf[128];
		memset(buf, 0, 128);
		sprintf(buf, "Relay %d ~ %d", relaytable_row, relaytable_row+7);
		lst << buf;

		relaytable_row += 8;
	}
	relaytable->setVerticalHeaderLabels(lst);

	for (int i = 0; i < relaytable->rowCount(); i++)
	{
		for (int j = 0; j < relaytable->columnCount(); j++) {
			//relaytable->horizontalHeader()->setSectionResizeMode(j, QHeaderView::ResizeToContents);
			relaytable->setEditTriggers(QAbstractItemView::NoEditTriggers);//表格不可编辑
			//relaytable->setColumnWidth(j, relaytable->size().width() / 1.8);
			QTableWidgetItem *check = new QTableWidgetItem;
			check->setCheckState(Qt::Checked);
			relaytable->setItem(i, j, check); //插入复选框
		}
	}

	QVBoxLayout *relaylayout = new QVBoxLayout; 
	relaylayout->addWidget(cleartableButt);
	relaylayout->addWidget(relaytableButt);
	relaylayout->addWidget(relaytable);
	relay_grp->setLayout(relaylayout);

	//
	mcutable = new QTableWidget;//表格操作 https://www.cnblogs.com/zhoug2020/p/3789076.html
	mcutable->setColumnCount(2);
	mcutable->setShowGrid(false);
	head = mcutable->verticalHeader();
	head->setHidden(true);
	head = mcutable->horizontalHeader();
	head->setHidden(true);
	mcutable->horizontalHeader()->setStretchLastSection(true);
	mcutable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
	connect(mcutable, SIGNAL(cellChanged(int,int)), this, SLOT(ipChange(int, int)));

	QHBoxLayout *tle = new QHBoxLayout;
	tle->addWidget(mcutable);
	mag->setLayout(tle);

	vbox = new QVBoxLayout;
	vbox->addWidget(act); 
	vbox->addWidget(relay_grp);
	vbox->addWidget(mag);

	setLayout(vbox);
}

macHighValtage::~macHighValtage()
{
}

void macHighValtage::mcuInfoTable()
{
	isUserModifyCellSignal = false;

	char buf[128] = { 0 };

	mcutable->setRowCount(MCUINFOSTRUCT_ROW);

	mcutable->setItem(0, 0, new QTableWidgetItem("Device Name"));
	std::string str = mcu.devName;
	QString tmp = QString::fromStdString(str);
	mcutable->setItem(0, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(1, 0, new QTableWidgetItem("Device Type"));
	memset(buf,0,128);
	sprintf(buf, "0x%x", mcu.devType);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(1, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(2, 0, new QTableWidgetItem("Device SN"));
	str = mcu.devSN;
	tmp = QString::fromStdString(str);
	mcutable->setItem(2, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(3, 0, new QTableWidgetItem("IP Address"));
	memset(buf, 0, 128);
	sprintf(buf, "%d.%d.%d.%d", mcu.mcuIP[0], mcu.mcuIP[1], mcu.mcuIP[2], mcu.mcuIP[3]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(3, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(4, 0, new QTableWidgetItem("IP Gateway"));
	memset(buf, 0, 128);
	sprintf(buf, "%d.%d.%d.%d",mcu.mcuGW[0], mcu.mcuGW[1], mcu.mcuGW[2], mcu.mcuGW[3]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(4, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(5, 0, new QTableWidgetItem("IP Port"));
	memset(buf, 0, 128);
	sprintf(buf, "%d", mcu.port);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(5, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(6, 0, new QTableWidgetItem("IP Netmask"));
	memset(buf, 0, 128);
	sprintf(buf, "%d.%d.%d.%d", mcu.mcuNetMask[0], mcu.mcuNetMask[1], mcu.mcuNetMask[2], mcu.mcuNetMask[3]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(6, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(7, 0, new QTableWidgetItem("Mcu NetMAC"));
	memset(buf, 0, 128);
	sprintf(buf, "%02x:%02x:%02x:%02x:%02x:%02x", mcu.mcuMAC[0], mcu.mcuMAC[1], \
		mcu.mcuMAC[2], mcu.mcuMAC[3], mcu.mcuMAC[4], mcu.mcuMAC[5], mcu.mcuMAC[6]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(7, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(8, 0, new QTableWidgetItem("Mcu Type"));
	str = mcu.mcuType;
	tmp = QString::fromStdString(str);
	mcutable->setItem(8, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(9, 0, new QTableWidgetItem("Mcu UID"));
	memset(buf, 0, 128);
	sprintf(buf, "%d-%d-%d", mcu.mcuUID[2], mcu.mcuUID[1], mcu.mcuUID[0]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(9, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(10, 0, new QTableWidgetItem("Sofeware Version"));
	memset(buf, 0, 128);
	sprintf(buf, "%d.%d.%d", mcu.mcuSV[0], mcu.mcuSV[1], mcu.mcuSV[2]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(10, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(11, 0, new QTableWidgetItem("Motherboard Version"));
	memset(buf, 0, 128);
	sprintf(buf, "%d.%d.%d", mcu.mcuHV[0], mcu.mcuHV[1], mcu.mcuHV[2]);
	str = buf;
	tmp = QString::fromStdString(str);
	mcutable->setItem(11, 1, new QTableWidgetItem(tmp));

	mcutable->setItem(12, 0, new QTableWidgetItem("Reserve"));
	str = (char *)mcu.reserve;
	tmp = QString::fromStdString(str);
	mcutable->setItem(12, 1, new QTableWidgetItem(tmp));

	for (int i = 0;i < MCUINFOSTRUCT_ROW; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if ((i==3 || i == 4 || i == 5 || i == 6) && (j==1))
			{
			}
			else
			{
				mcutable->item(i, j)->setFlags(mcutable->item(i, j)->flags() & ~Qt::ItemIsEditable);//不可编辑
				mcutable->item(i, j)->setFlags(mcutable->item(i, j)->flags() & ~Qt::ItemIsSelectable);//不可选择
			}			
		}		
	}

	isUserModifyCellSignal = true;
}

bool macHighValtage::IpCheck(QString ip)
{
	int tmp = -1;
	QList<QString> lst;
	lst = ip.split('.', QString::SkipEmptyParts);
	if (lst.size() != 4)
	{
		return false;
	}
	for (int i = 0; i < 4; i++) {
		tmp = lst[i].toInt(nullptr, 10);
		if (tmp < 0 || tmp > 255)
		{
			return false;
		}
	}
	return true;
}

void macHighValtage::SetIpChange()
{
	u8 crc = 0;
	qint64 rv = 0;
	QByteArray relay_data;
	relay_data.resize(41);
	for (int i = 0; i < 8; i++)
	{
		relay_data[i] = 0xbe;
	}

	relay_data[8] = COMM_CMD_IP;
	relay_data[9] = 0x0e;//len

	for (int i =0;i<4;i++)
	{
		relay_data[10 + i] = nIP[i];
		crc += nIP[i];
	}
	for (int i = 0; i < 2; i++)
	{
		relay_data[14 + i] = nPort[i];
		crc += nPort[i];
	}
	for (int i = 0; i < 4; i++)
	{
		relay_data[16 + i] = nNm[i];
		crc += nNm[i];
	}
	for (int i = 0; i < 4; i++)
	{
		relay_data[20 + i] = nGw[i];
		crc += nGw[i];
	}

	relay_data[24] = crc;//crc

	for (int i = 25; i < 33; i++)
	{
		relay_data[i] = 0xff;
	}
	for (int i = 33; i < 41; i++)
	{
		relay_data[i] = 0xed;
	}

	u16 Port = mcu.port;
	char IP[32] = { 0 };
	sprintf(IP, "%d.%d.%d.%d", mcu.mcuIP[0], mcu.mcuIP[1], mcu.mcuIP[2], mcu.mcuIP[3]);

	QUdpSocket *uSocket = new QUdpSocket();
	rv = uSocket->writeDatagram(relay_data, relay_data.length(), QHostAddress(IP), Port);
	if (rv != relay_data.length())
	{
		QMessageBox::information(NULL, "Warning", "Informatin modify Failed !", QMessageBox::Yes, QMessageBox::Yes);
	}

	uSocket->disconnect();
	delete uSocket;
}

void macHighValtage::ipChange(int row, int col)
{
	if (isUserModifyCellSignal)
	{
		if (row == 3 && col == 1)
		{
			qDebug() << "ip modify";
		}
		if (row == 4 && col == 1)
		{
			qDebug() << "gw modify";
		}
		if (row == 5 && col == 1)
		{
			qDebug() << "port modify";
		}
		if (row == 6 && col == 1)
		{
			qDebug() << "nm modify";
		}		

		QTableWidgetItem *item;
		QList<QString> lst;
		QString ip;
		item = mcutable->item(3,1);
		ip = item->text();
		if (!IpCheck(ip))
		{
			QMessageBox::information(NULL, "Warning", weChinese2LocalCode("IP信息格式错误"), QMessageBox::Yes, QMessageBox::Yes);
			return;
		}
		lst = ip.split('.', QString::SkipEmptyParts);
		for (int i = 0; i < 4; i++) {
			nIP[i] = lst[i].toInt(nullptr, 10) & 0xff;
		}

		item = mcutable->item(4, 1);
		ip = item->text();
		if (!IpCheck(ip))
		{
			QMessageBox::information(NULL, "Warning", weChinese2LocalCode("IP信息格式错误"), QMessageBox::Yes, QMessageBox::Yes);
			return;
		}
		lst = ip.split('.', QString::SkipEmptyParts);
		for (int i = 0; i < 4; i++) {
			nGw[i] = lst[i].toInt(nullptr, 10) & 0xff;
		}
		
		item = mcutable->item(5, 1);
		QString Port = item->text();
		if (Port.toInt(nullptr, 10) < 0 || Port.toInt(nullptr, 10) > 65535)
		{
			QMessageBox::information(NULL, "Warning", weChinese2LocalCode("IP信息格式错误"), QMessageBox::Yes, QMessageBox::Yes);
			return;
		}
		nPort[0] = Port.toInt(nullptr, 10) & 0xff;
		nPort[1] = Port.toInt(nullptr, 10) >>8;

		item = mcutable->item(6, 1);
		ip = item->text();
		if (!IpCheck(ip))
		{
			QMessageBox::information(NULL, "Warning", weChinese2LocalCode("IP信息格式错误"), QMessageBox::Yes, QMessageBox::Yes);
			return;
		}
		lst = ip.split('.', QString::SkipEmptyParts);
		for (int i = 0; i < 4; i++) {
			nNm[i] = lst[i].toInt(nullptr, 10) & 0xff;
		}

		SetIpChange();
		QMessageBox::information(NULL, "Warning", weChinese2LocalCode("IP等信息已设置为新值，重启设备后生效"), QMessageBox::Yes, QMessageBox::Yes);
	}		
}

void macHighValtage::EmitQuerySig()
{
	v1G_val->setNum(0.0);
	v12_val->setNum(0.0);
	v34_val->setNum(0.0);
	v56_val->setNum(0.0);
	hall_val->setNum(0.0);
	activeButt->setEnabled(false);

	char IP[32] = { 0 };
	sprintf(IP, "%d.%d.%d.%d", mcu.mcuIP[0], mcu.mcuIP[1], mcu.mcuIP[2], mcu.mcuIP[3]);
	queryTh->Th_ip = IP;
	queryTh->port = mcu.port;

	queryTh->start();
}

void macHighValtage::setVal(int type, void *val)
{
	if (type == 1)
	{
		float v1[5] = { 0.0 };

		memcpy(v1, queryTh->v, 20);

		v1G_val->setNum(v1[0]);
		v12_val->setNum(v1[1]);
		v34_val->setNum(v1[2]);
		v56_val->setNum(v1[3]);
		hall_val->setNum(v1[4]);
	}	

	activeButt->setEnabled(true);
}

void macHighValtage::relayactive()
{
	relaytableButt->setEnabled(false);//
	qint64 rv = 0;
	u8 crc = 0;
	QUdpSocket *uSocket = new QUdpSocket();


	QByteArray relay_data;
	relay_data.resize(38);
	for (int i = 0; i < 8; i++)
	{
		relay_data[i] = 0xbe;
	}

	relay_data[8] = COMM_CMD_RELAY_CONF;
	relay_data[9] = 0xb;//len

	for (int j=0;j<11;j++)
	{
		relay_data[j+10] = 0;

		for (int k=0;k<8;k++)
		{
			if (relaytable->item(j,k)->checkState() == Qt::Checked)
			{
				relay_data[j+10] = (relay_data[j+10] | (1<<k));
			}
		}

		crc += relay_data[j+10];
	}

	relay_data[21] = crc;

	for (int i = 22; i < 30; i++)
	{
		relay_data[i] = 0xff;
	}
	for (int i = 30; i < 38; i++)
	{
		relay_data[i] = 0xed;
	}

	u16 Port = mcu.port;
	char IP[32] = { 0 };
	sprintf(IP, "%d.%d.%d.%d", mcu.mcuIP[0], mcu.mcuIP[1], mcu.mcuIP[2], mcu.mcuIP[3]);

	rv = uSocket->writeDatagram(relay_data, relay_data.length(), QHostAddress(IP), Port);
	qDebug() << "IP:" << IP << "port:" << Port << " writeDatagram : " << relay_data.toHex() << " rv:" << rv;
	if (rv != relay_data.length())
	{
		//QMessageBox::information(NULL, "Warning", "Send Message Failed !", QMessageBox::Yes, QMessageBox::Yes);
	}

	
	relay_data;
	relay_data.resize(28);
	for (int i = 0; i < 8; i++)
	{
		relay_data[i] = 0xbe;
	}

	relay_data[8] = COMM_CMD_RELAY_ACTIVE;
	relay_data[9] = 0x1;//len

	relay_data[10] = 1;
	relay_data[11] = 1;

	for (int i = 12; i < 20; i++)
	{
		relay_data[i] = 0xff;
	}
	for (int i = 20; i < 28; i++)
	{
		relay_data[i] = 0xed;
	}

	rv = uSocket->writeDatagram(relay_data, relay_data.length(), QHostAddress(IP), Port);
	if (rv != relay_data.length())
	{
		//QMessageBox::information(NULL, "Warning", "Send Message Failed !", QMessageBox::Yes, QMessageBox::Yes);
	}

	uSocket->disconnect();
	delete uSocket;

	relaytableButt->setEnabled(true);
}

void macHighValtage::relayclear(int check)
{
	qDebug() << "cleartableButt check change";
	if (check == Qt::Checked)
	{
		cleartableButt->setText(weChinese2LocalCode("点击取消选中所有Relay"));
		for (int i = 0; i < relaytable->rowCount(); i++)
		{
			for (int j = 0; j < relaytable->columnCount(); j++) {
				relaytable->item(i, j)->setCheckState(Qt::Checked);
			}
		}
	}
	else
	{
		cleartableButt->setText(weChinese2LocalCode("点击选中所有Relay"));
		for (int i = 0; i < relaytable->rowCount(); i++)
		{
			for (int j = 0; j < relaytable->columnCount(); j++) {
				relaytable->item(i, j)->setCheckState(Qt::Unchecked);
			}
		}
	}		
}


void queryThread::run()
{
	float v[5] = {0.0};

	uSocket = new QUdpSocket();	
	QByteArray relay_data;
	relay_data.resize(47);
	for (int i=0;i<8;i++)
	{
		relay_data[i] = 0xbe;
	}

	relay_data[8] = COMM_CMD_RELAY_ADC;
	relay_data[9] = 0x14;//len

	for (int i=10;i<31;i++)
	{
		relay_data[i] = 0;
	}

	for (int i = 31; i < 39; i++)
	{
		relay_data[i] = 0xff;
	}
	for (int i = 39; i < 47; i++)
	{
		relay_data[i] = 0xed;
	}

	qint64 rv = uSocket->writeDatagram(relay_data, relay_data.length(), QHostAddress(Th_ip), port);
	if (rv != relay_data.length())
	{
		qDebug() << "relay_data.length not equal";
		//QMessageBox::information(NULL, "Warning", "Send Message Failed !", QMessageBox::Yes, QMessageBox::Yes);//Qt将所有GUI相关的处理都限制在主线程中，这么做有助于防止意想不到的访问冲突产生，但也限制了线程中某些简单的UI交互的实现，比如QMessageBox
		emit giveQueryedVal(0, 0);
	}

	if (uSocket->waitForReadyRead() == false)
	{
		qDebug() << "waitForReadyRead timeout";
		//QMessageBox::information(NULL, "Warning", "Device has no response !", QMessageBox::Yes, QMessageBox::Yes);
		emit giveQueryedVal(0, 0);
	}
	else
	{
		QByteArray datagram;
		quint32 datalen = uSocket->pendingDatagramSize();
		if (datalen == 47)
		{
			datagram.resize(datalen);
			uSocket->readDatagram(datagram.data(), datagram.size());
		}

		this->v[0].c[0] = datagram.data()[10];
		this->v[0].c[1] = datagram.data()[11];
		this->v[0].c[2] = datagram.data()[12];
		this->v[0].c[3] = datagram.data()[13];

		this->v[1].c[0] = datagram.data()[14];
		this->v[1].c[1] = datagram.data()[15];
		this->v[1].c[2] = datagram.data()[16];
		this->v[1].c[3] = datagram.data()[17];

		this->v[2].c[0] = datagram.data()[18];
		this->v[2].c[1] = datagram.data()[19];
		this->v[2].c[2] = datagram.data()[20];
		this->v[2].c[3] = datagram.data()[21];

		this->v[3].c[0] = datagram.data()[22];
		this->v[3].c[1] = datagram.data()[23];
		this->v[3].c[2] = datagram.data()[24];
		this->v[3].c[3] = datagram.data()[25];

		this->v[4].c[0] = datagram.data()[26];
		this->v[4].c[1] = datagram.data()[27];
		this->v[4].c[2] = datagram.data()[28];
		this->v[4].c[3] = datagram.data()[29];

		emit giveQueryedVal(1, 0);
	}

	uSocket->disconnect();
	delete uSocket;

	qDebug() << "query thread exit";
}
