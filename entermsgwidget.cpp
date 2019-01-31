#include "entermsgwidget.h"
#include "dialogwindow.h"

#include <QtWidgets>
EnterMsgWidget::EnterMsgWidget(QWidget *parent) : QWidget (parent){
    sendButton = new QPushButton("Send");
    msgLine = new QLineEdit;
    typeMsgLabel = new QLabel("Alexa This is Epic");



}


