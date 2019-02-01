#include "newaddresstab.h"

#include<QtWidgets>

NewAddressTab::NewAddressTab(QWidget *parent) : QWidget(parent)
{
    addButton = new QPushButton("Adicionar Contato");
    msgText = new QLabel("Você não tem nenhum contato ainda,\nAdicione agora!");
    msgText->setAlignment(Qt::AlignCenter);

    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->addWidget(msgText,0,Qt::AlignCenter|Qt::AlignBottom);
    vLayout->addWidget(addButton,0,Qt::AlignCenter|Qt::AlignTop);

    connect(addButton,SIGNAL(clicked()),parent,SLOT(callDialogWindow()));

    setLayout(vLayout);
}



