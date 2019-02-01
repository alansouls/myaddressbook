#include "mainwindow.h"
#include "newaddresstab.h"


#include <QMenuBar>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
   mainWidget = new AddressWidget(this);
   createMenus();
   setCentralWidget(mainWidget);

}

MainWindow::~MainWindow()
{

}


void MainWindow::createMenus(){
    opMenu = menuBar()->addMenu(tr("Opções"));
    QAction *newAction = opMenu->addAction(tr("Novo Contato"));
    newAction->
    connect(newAction, SIGNAL(triggered()),mainWidget,SLOT(showAddEntryDialog()));

}



