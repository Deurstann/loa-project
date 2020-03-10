#ifndef INVENTORY_H
#define INVENTORY_H

#include <QObject>
#include <QVector>
#include <item.h>

class inventory
{
public:
    inventory();
private:
    unsigned int capacity;
    QVector<item> objects;
};

#endif // INVENTORY_H
