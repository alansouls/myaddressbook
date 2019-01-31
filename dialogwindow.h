#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QDialog>



QT_BEGIN_NAMESPACE
class QPushButton;
class QLabel;
class QLineEdit;
class QTextEdit;
QT_END_NAMESPACE
class DialogWindow : public QDialog{

   Q_OBJECT

public:
    DialogWindow(QWidget *parent = nullptr);
    QLineEdit *nameBox;
    QTextEdit *addressBox;

private:
    QPushButton *okButton;
    QPushButton *denyButton;
    QLabel *nameLabel;
    QLabel *addressLabel;

};

#endif // DIALOGWINDOW_H
