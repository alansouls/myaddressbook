#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialogwindow.h"
#include "addresswidget.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void createMenus();
    QMenu *opMenu;
    AddressWidget *mainWidget;

private slots :
    void updateActions(const QItemSelection &selection);

private:
    QAction *editAction;
    QAction *removeAction;
};

#endif // MAINWINDOW_H
