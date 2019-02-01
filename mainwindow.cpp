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
    QAction *editAction = opMenu->addAction(tr("Editar Contato"));
    editAction->setEnabled(false);
    opMenu->addAction(editAction);
    connect(editAction, SIGNAL(triggered()), mainWidget, SLOT(editEntry));

    opMenu->addSeparator();

    QAction *removeAction = new QAction(tr("Remover Contato"));
    removeAction->setEnabled(false);
    opMenu->addAction(removeAction);
    connect(removeAction, SIGNAL(triggered()), mainWidget, SLOT(removeEntry()));

    connect(mainWidget, SIGNAL(selectionChanged()),
        this, SLOT(updateActions()));

}



