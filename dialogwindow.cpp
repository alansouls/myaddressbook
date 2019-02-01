#include "dialogwindow.h"

#include <QtWidgets>

DialogWindow::DialogWindow(QWidget *parent) : QDialog (parent){
   okButton = new QPushButton("Ok");
   denyButton = new QPushButton("Cancelar");
   nameLabel = new QLabel("Nome");
   addressLabel = new QLabel("Endereço");
   nameBox = new QLineEdit;
   addressBox = new QTextEdit;

   QGridLayout *gLayout = new QGridLayout;
   gLayout->setColumnStretch(1,2);
   gLayout->addWidget(nameLabel,0,0);
   gLayout->addWidget(addressLabel,1,0,Qt::AlignLeft|Qt::AlignTop);
   gLayout->addWidget(nameBox,0,1);
   gLayout->addWidget(addressBox,1,1,Qt::AlignTop);
   QHBoxLayout *boxLayout = new QHBoxLayout;
   boxLayout->addWidget(okButton);
   boxLayout->addWidget(denyButton);
   gLayout->addLayout(boxLayout,2,1);
   QVBoxLayout  *mainLayout = new QVBoxLayout;
   mainLayout->addLayout(gLayout);
   setLayout(mainLayout);

   setWindowTitle(tr("Adicionar um contato"));

   connect(okButton,SIGNAL(clicked()),this,SLOT(accept()));
   connect(denyButton,SIGNAL(clicked()),this,SLOT(reject()));
}


