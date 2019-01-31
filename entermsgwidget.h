#ifndef ENTERMSGWIDGET_H
#define ENTERMSGWIDGET_H

#include <QWidget>
QT_BEGIN_NAMESPACE
class QPushButton;
class QLabel;
class QLineEdit;
QT_END_NAMESPACE
class EnterMsgWidget : public QWidget{
    Q_OBJECT

public:
    EnterMsgWidget();

private slots:
    void sendMsgToDialog();

private:
   QPushButton *send;
   QLabel *typeMsgLabel;
   QLineEdit *msgLine;
};
#endif // ENTERMSGWIDGET_H
