#include "mainwindow.h"
#include "newaddresstab.h"
#include "addresswidget.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
   AddressWidget *mainWidget = new AddressWidget(this);
   setCentralWidget(mainWidget);

}

MainWindow::~MainWindow()
{

}




