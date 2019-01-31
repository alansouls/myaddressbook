#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    EnterMsgWidget *eMsgW = new EnterMsgWidget;
    connect(eMsgW,SIGNAL(exitApp()),this,SLOT(close()));
    setCentralWidget(eMsgW);
}

MainWindow::~MainWindow()
{

}

