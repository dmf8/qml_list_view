#include "list_model_1.h"

List_Model_1::List_Model_1()
{
    for (int i = 0; i < 5; ++i) {
        model2_map.insert(i, new List_Model_2);
    }
}

int List_Model_1::rowCount(const QModelIndex &parent) const
{
    return 5;
}

QVariant List_Model_1::data(const QModelIndex &index, int role) const
{
    if (index.isValid()) {
        int row = index.row();

        switch (role) {
        case Role11:
            return QString("role 11: %1").arg(row);
            break;
        case Role12:
            return QString("role 12: %1").arg(row);
            break;
        case RoleModel:
            if (0 != row)
                return QVariant::fromValue(model2_map[row]);
            break;
        default:
            break;
        }
    }

    return QVariant();
}

QHash<int, QByteArray> List_Model_1::roleNames() const
{
    QHash<int, QByteArray> names;
    names.insert(Role11, "role11");
    names.insert(Role12, "role12");
    names.insert(RoleModel, "roleModel");
    return names;
}
