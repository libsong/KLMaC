﻿#pragma once

#include <QTextCodec>

#define  APP_VERSION "1.0.0"

#ifndef u16
typedef unsigned short u16;
#endif
#ifndef u8
typedef unsigned char u8;
#endif
#ifndef u32
typedef unsigned int u32;
#endif
#ifndef s8
typedef char s8;
#endif

//udp组播发现协议结构信息
#define MCUINFOSTRUCT_ROW 13
#pragma pack(1)
typedef struct mcuinfo {
	bool operator == (const mcuinfo & value) const;

	u16		devType;//设置类型标识，0x0100电源类 0x0200故障类 0x0300高压类
	u16		port;//端口
	s8		devName[32]; //设备名称
	s8		devSN[16]; //设备SN号，暂无，待公司生产正规化后加入	
	s8		mcuType[16]; //芯片类型
	u32		mcuUID[3]; //芯片UID 标识
	u8		mcuSV[3]; //软件版本号，[0]:主版本[1]:次版本[2]:dubug版本
	u8		mcuIP[4]; //ip
	u8		mcuNetMask[4]; //掩码
	u8		mcuGW[4]; //网关
	u8		mcuMAC[6]; //网络初始化时使用的mac地址，stm32芯片采用UID拼成
	u8		mcuHV[2];	//母板硬件版本 [0]主版本 [1]次版本
	u8		reserve[1]; //保留后续扩展
}McuInfo_t;
#pragma pack()

typedef enum {
	COMM_CMD_TEST,
	COMM_CMD_RELAY_CONF,
	COMM_CMD_RELAY_ACTIVE,
	COMM_CMD_RELAY_RESET,
	COMM_CMD_RELAY_ADC,//高压模拟器 GET VAL CUR
	COMM_CMD_RELAY_PWR,//电源分配箱
	COMM_CMD_IP = 0xc8,//ip port gw nm等修改
}COMM_CMD;

union  u8Tofloat
{
	float f;
	u8 c[4];
};


extern QString weChinese2LocalCode(char *x);