#ifndef LIST_MODEL_2_H
#define LIST_MODEL_2_H

#include <QAbstractListModel>

class List_Model_2 : public QAbstractListModel
{
    Q_OBJECT
public:
    enum Roles1 {
        Role21 = Qt::UserRole + 1,
        Role22,
    };

    List_Model_2();

    List_Model_2(const List_Model_2& model2);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    QHash<int, QByteArray> roleNames() const;
};

Q_DECLARE_METATYPE(List_Model_2)

#endif // LIST_MODEL_2_H
