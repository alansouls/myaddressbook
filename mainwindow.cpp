#include "mainwindow.h"
#include "newaddresstab.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    NewAddressTab *newAddressTab = new NewAddressTab(this);
    setCentralWidget(newAddressTab);

}

MainWindow::~MainWindow()
{

}


slots void MainWindow::callDialogWindow(){
    DialogWindow *dialogWin = new DialogWindow(this);
    dialogWin->exec();
}

