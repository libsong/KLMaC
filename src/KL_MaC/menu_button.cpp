#include "menu_button.h"

macMenuButton::macMenuButton(QWidget *parent /*= 0*/)
	: QPushButton(parent)
{
	//https://blog.csdn.net/heaven_evil/article/details/78601478
	//https://blog.csdn.net/u011417605/article/details/50929986
	setMinimumHeight(20);
	setMaximumWidth(50);
	setContextMenuPolicy(Qt::CustomContextMenu);
	setFocusPolicy(Qt::NoFocus);

	//菜单栏 https://blog.csdn.net/pigautumn/article/details/9000350
	//menubar = new QMenuBar(this);

	//文件
	menu = new QMenu;

	fileMenu = menu->addMenu("File");
	actionNew = fileMenu->addAction("New");
	actionOpen = fileMenu->addAction("Open");
	actionSave = fileMenu->addAction("Save");

	//编辑
	editMenu = menu->addMenu("Edit");
	actionUndo = editMenu->addAction("Undo");
	actionRedo = editMenu->addAction("Redo");
	editMenu->addSeparator();
	actionCut = editMenu->addAction("Cut");
	actionCopy = editMenu->addAction("Copy");
	actionPaste = editMenu->addAction("Paste");
	editMenu->addSeparator();
	actionSelectAll = editMenu->addAction("Select All");

	//退出
	actionQuit = menu->addAction("Quit", qApp, SLOT(quit()));

	connect(this, SIGNAL(clicked()), this, SLOT(showMenu()));
}

macMenuButton::~macMenuButton()
{
	delete menu;
}

void macMenuButton::showMenu()
{
	QPoint pt = QCursor::pos();
	menu->exec(pt);
}

