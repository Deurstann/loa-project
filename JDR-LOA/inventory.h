#ifndef INVENTORY_H
#define INVENTORY_H

#include <QObject>
#include <QVector>
#include <item.h>

class Inventory
{
public:
    Inventory();
    bool addItem(Item item);
    void removeItem(Item item);

    unsigned int getCapacity() const;
    void setCapacity(unsigned int value);

private:
    unsigned int capacity;
    QVector<Item> objects;
};

#endif // INVENTORY_H
