#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QPushButton;
class QLabel;
QT_END_NAMESPACE
class DialogWindow : public QDialog{

   Q_OBJECT

public:
    DialogWindow(QWidget *parent = nullptr);

private:
    QPushButton *okButton;
    QPushButton *denyButton;
    QLabel *msgText;
};

#endif // DIALOGWINDOW_H
