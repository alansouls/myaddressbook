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
    connect(newAction, SIGNAL(triggered()),mainWidget,SLOT(showAddEntryDialog()));
    editAction = opMenu->addAction(tr("Editar Contato"));
    editAction->setEnabled(false);
    opMenu->addAction(editAction);
    connect(editAction, SIGNAL(triggered()), mainWidget, SLOT(editEntry()));

    opMenu->addSeparator();

    removeAction = new QAction(tr("Remover Contato"));
    removeAction->setEnabled(false);
    opMenu->addAction(removeAction);
    connect(removeAction, SIGNAL(triggered()), mainWidget, SLOT(removeEntry()));

    connect(mainWidget, &AddressWidget::selectionChanged,
        this, &MainWindow::updateActions);

}

void MainWindow::updateActions(const QItemSelection &selection)
{
    QModelIndexList indexes = selection.indexes();

    if (!indexes.isEmpty()) {
        removeAction->setEnabled(true);
        editAction->setEnabled(true);
    } else {
        removeAction->setEnabled(false);
        editAction->setEnabled(false);
    }
}



