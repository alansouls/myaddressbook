#include "entermsgwidget.h"
#include "dialogwindow.h"

#include <QtWidgets>
EnterMsgWidget::EnterMsgWidget(QWidget *parent) : QWidget (parent){
    sendButton = new QPushButton("Send");
    msgLine = new QLineEdit;
    typeMsgLabel = new QLabel("Alexa This is Epic");

    connect(sendButton, SIGNAL(clicked()),this, SLOT(sendMsgToDialog()));

    QGridLayout *gLayout = new QGridLayout;
    gLayout->addWidget(typeMsgLabel, 0, 0,Qt::AlignBottom);
    gLayout->addWidget(msgLine,1,0,Qt::AlignTop);
    gLayout->addWidget(sendButton,2,1,Qt::AlignTop);
    setLayout(gLayout);

}

slots void EnterMsgWidget::sendMsgToDialog(){
   DialogWindow *dWindow = new DialogWindow(nullptr,msgLine->text());
   if(!dWindow->exec()){
        emit exitApp();
   }
}
