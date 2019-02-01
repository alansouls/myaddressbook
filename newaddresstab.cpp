#include "newaddresstab.h"
#include "addresswidget.h"
#include "dialogwindow.h"

#include<QtWidgets>

NewAddressTab::NewAddressTab(QWidget *parent) : QWidget(parent)
{
    addButton = new QPushButton("Adicionar Contato");
    msgText = new QLabel("Você não tem nenhum contato ainda,\nAdicione agora!");
    msgText->setAlignment(Qt::AlignCenter);

    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->addWidget(msgText,0,Qt::AlignCenter|Qt::AlignBottom);
    vLayout->addWidget(addButton,0,Qt::AlignCenter|Qt::AlignTop);

    connect(addButton,SIGNAL(clicked()),this,SLOT(addEntry()));

    setLayout(vLayout);
}

slots void NewAddressTab::addEntry(){
    DialogWindow dialogWin;

    if(dialogWin.exec()){
        QString name = dialogWin.nameBox->text();
        QString address = dialogWin.addressBox->toPlainText();

        emit sendDetails(name,address);
    }
}



