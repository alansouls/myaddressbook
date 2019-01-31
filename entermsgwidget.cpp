#include "entermsgwidget.h"

#include <QtWidgets>

EnterMsgWidget::EnterMsgWidget(QWidget *parent){
    sendButton = new QPushButton("Send");
    msgLine = new QLineEdit;
    typeMsgLabel = new QLabel;

    QGridLayout *gLayout = new QGridLayout;
    gLayout->setColumnStretch(1,2);
    gLayout->setColumnStretch(1, 2);
    gLayout->addWidget(typeMsgLabel, 0, 0);
    gLayout->addWidget(nameText, 0, 1);

}
