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
    EnterMsgWidget(QWidget *parent = nullptr);

private slots:
    void sendMsgToDialog();


signals: void exitApp();

private:
   QPushButton *sendButton;
   QLabel *typeMsgLabel;
   QLineEdit *msgLine;
};
#endif // ENTERMSGWIDGET_H
