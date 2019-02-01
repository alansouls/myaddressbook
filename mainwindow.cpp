#include "mainwindow.h"
#include "newaddresstab.h"
#include "addresswidget.h"

#include <QMenuBar>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
   AddressWidget *mainWidget = new AddressWidget(this);
   createMenus();
   setCentralWidget(mainWidget);

}

MainWindow::~MainWindow()
{

}


void MainWindow::createMenus(){
    opMenu = menuBar()->addMenu(tr("Opções"));

}



