#pragma once


#include <QPlainTextEdit>  
#include <QScrollBar>

#include "we_types.h"

class QLineEdit;
class macShell :public QPlainTextEdit
{
	Q_OBJECT

public:
	explicit macShell(QWidget *parent = 0);
	~macShell();
	virtual QString runCommand(const QString& cmd);

	void saveSshObjInf(QString ip, QString usr, QString pwd);

protected:
	void resizeEvent(QResizeEvent *e);
	private slots:
	void onScrollBarValueChanged();
	void onEditFinished();

private:
	void updateEditPosition();
	QLineEdit * edit;

	QString m_ip;
	QString m_usr ;
	QString m_pwd ;
};