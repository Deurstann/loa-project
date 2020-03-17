#ifndef WEAPON_H
#define WEAPON_H

#include <QObject>
#include "item.h"
#include "element.h"

class weapon : public Item
{
public:
    weapon(QString name, unsigned int value, unsigned int weight,QString description, QImage illustration,
           unsigned int damage, unsigned int range, unsigned int armorPiercing, unsigned int ammunition, Element element);
    unsigned int getDamage() const;

    unsigned int getRange() const;

    unsigned int getArmorPiercing() const;

    unsigned int getAmmunition() const;

    Element getElement() const;

private:
    unsigned int damage;
    unsigned int range;
    unsigned int armorPiercing;
    unsigned int ammunition;
    Element element;
};

#endif // WEAPON_H
