#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    DialogWindow *dwindow = new DialogWindow;
    dwindow->exec();
}

MainWindow::~MainWindow()
{

}

