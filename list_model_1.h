#ifndef LIST_MODEL_1_H
#define LIST_MODEL_1_H

#include <QAbstractListModel>
#include "list_model_2.h"

class List_Model_1 : public QAbstractListModel
{
    Q_OBJECT
public:
    enum Roles1 {
        Role11 = Qt::UserRole + 1,
        Role12,
        RoleModel,
    };

    List_Model_1();

    int rowCount(const QModelIndex &parent = QModelIndex()) const;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    QHash<int, QByteArray> roleNames() const;

private:
    QMap<int, List_Model_2*> model2_map;
};

#endif // LIST_MODEL_1_H
