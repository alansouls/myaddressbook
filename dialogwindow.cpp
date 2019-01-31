#include "dialogwindow.h"

#include <QtWidgets>

DialogWindow::DialogWindow(QWidget *parent, QString msgTextReceived) : QDialog (parent){
   okButton = new QPushButton("Ok");
   denyButton = new QPushButton("Deny");
   msgText = new QLabel(msgTextReceived);

   QGridLayout *gLayout = new QGridLayout;
   gLayout->addWidget(msgText,0,0);
   QHBoxLayout *hbLayout = new QHBoxLayout;
   hbLayout->addWidget(okButton);
   hbLayout->addWidget(denyButton);
   gLayout->addLayout(hbLayout,1,0);
   setLayout(gLayout);

   setWindowTitle("You got a message");

   connect(okButton,SIGNAL(clicked()),this,SLOT(accept()));
   connect(denyButton,SIGNAL(clicked()),this,SLOT(reject()));
}


