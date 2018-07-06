#pragma once

#include <QTreeWidget>
#include <QMouseEvent>

#include <WinSock2.h>
#include <iphlpapi.h>

#include "we_types.h"

#define MB 1024*1024
#define REMOTELEAFMAX 128

class macTreeSys : public QTreeWidget
{
	Q_OBJECT

public:
	macTreeSys(QTreeWidget *parent = 0);
	~macTreeSys();

	s8 memcmp(u8 *s1,u8 *s2,int len)
	{
		u8 *src1 = s1;
		u8 *src2 = s2;

		for (; len>0; ++src1,++src2,len--)
		{
			if (*src1 != *src2)
			{
				return 1;
			}
		}

		return 0;
	}
	void GetLocalInfo(void);

signals:
	void GiveLocalInfo(int infotype,int row, int col, const QString &text);
	void showStackWidgetLocal(void);
	void showStackWidget(McuInfo_t *val);

public slots:
	void showLeafLeftMouseClick(QTreeWidgetItem*, int);
	void showLeafRightMouseClick(const QPoint &pos);
	void MakeRemoteLeaf(void *val);

private:
	int				m_LeafIndex;
	QTreeWidgetItem *m_local = NULL;
	QTreeWidgetItem *m_NetInfoLeaf = NULL;
	QTreeWidgetItem *m_SysInfoLeaf = NULL;

	QTreeWidgetItem *m_remote = NULL;
	int				remoteleaf_cnt;
	QTreeWidgetItem *m_remoteleaf[REMOTELEAFMAX] = { NULL };	
	McuInfo_t		*m_leafinfo[REMOTELEAFMAX] = { NULL };

protected:
	void mouseReleaseEvent(QMouseEvent *event);

};



