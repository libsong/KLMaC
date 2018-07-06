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

	//QAction *action_setting; //设置
	//QAction *action_new_character; //新版特性
	//QAction *action_check_update; //检查更新
	//QAction *action_change_company; //切换为企业版
	//QAction *action_help_online; //在线帮助
	//QAction *action_platform_help; //论坛求助
	//QAction *action_login_home; //360网站
	//QAction *action_protect; //隐私保护
	//QAction *action_about_us; //关于我们

};
