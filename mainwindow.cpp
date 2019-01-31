#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    EnterMsgWidget *eMsgW = new EnterMsgWidget;
    setCentralWidget(eMsgW);
}

MainWindow::~MainWindow()
{

}

