#include "list_model_2.h"

List_Model_2::List_Model_2()
{

}

List_Model_2::List_Model_2(const List_Model_2 &model2)
{

}

int List_Model_2::rowCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant List_Model_2::data(const QModelIndex &index, int role) const
{
    if (index.isValid()) {
        int row = index.row();

        switch (role) {
        case Role21:
            return QString("role 21: %1").arg(row);
            break;
        case Role22:
            return QString("role 22: %1").arg(row);
            break;
        default:
            break;
        }
    }

    return QVariant();
}

QHash<int, QByteArray> List_Model_2::roleNames() const
{
    QHash<int, QByteArray> names;
    names.insert(Role21, "role21");
    names.insert(Role22, "role22");
    return names;
}
