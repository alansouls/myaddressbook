#ifndef NEWADDRESSTAB_H
#define NEWADDRESSTAB_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QPushButton;
class QLabel;
QT_END_NAMESPACE
class NewAddressTab : public QWidget
{
    Q_OBJECT
public:
    explicit NewAddressTab(QWidget *parent = nullptr);

signals:
    void sendDetails(QString name, QString address);

public slots:
    void addEntry();


private:
    QPushButton *addButton;
    QLabel *msgText;
};




#endif // NEWADDRESSTAB_H
