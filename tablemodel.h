#ifndef TABLEMODEL_H
#define TABLEMODEL_H
#include <QAbstractTableModel>
#include <QList>

struct Contact{
    QString name;
    QString address;
};

class TableModel : public  QAbstractTableModel
{
public:
    TableModel(QObject *parent = nullptr);
    TableModel(QList<Contact> contacts,QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;
    bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex()) override;
    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex()) override;

    QList<Contact> contacts;
};

#endif // TABLEMODEL_H
