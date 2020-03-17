
#ifndef ARMOR_H
#define ARMOR_H
#include "item.h"
#include "element.h"


class Armor : public Item
{
public:
    Armor(QString name, unsigned int value, unsigned int weight,QString description, QImage illustration,
          unsigned int armorPoints, Element element);
    unsigned int getArmorPoints() const;

    Element getElement() const;

private:
    unsigned int armorPoints;
    Element element;
};

#endif // ARMOR_H
