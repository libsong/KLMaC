#pragma once

#include <QMenu>
#include <QMenuBar>
#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QPoint>
#include <QMouseEvent>

#include "common.h"

class macMenuButton : public QPushButton
{
	Q_OBJECT

public:
	explicit macMenuButton(QWidget *parent = 0);
	~macMenuButton();

protected slots:
	void showMenu();

signals:

	void showSettingDialog();
	void showNewCharacter();
	void showAboutUs();

private:

	void createActions();

private:

	QMenu *menu;

	QMenu *fileMenu;
	QAction *actionNew;
	QAction *actionOpen;
	QAction *actionSave;
	QAction *actionQuit;

	QMenu *editMenu;
	QAction *actionUndo;
	QAction *actionRedo;
	QAction *actionCut;
	QAction *actionCopy;
	QAction *actionPaste;
	QAction *actionSelectAll;

	//QAction *action_setting; //����
	//QAction *action_new_character; //�°�����
	//QAction *action_check_update; //������
	//QAction *action_change_company; //�л�Ϊ��ҵ��
	//QAction *action_help_online; //���߰���
	//QAction *action_platform_help; //��̳����
	//QAction *action_login_home; //360��վ
	//QAction *action_protect; //��˽����
	//QAction *action_about_us; //��������

};
