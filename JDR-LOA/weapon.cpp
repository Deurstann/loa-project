#include "weapon.h"
#include "item.h"

weapon::weapon(QString name, unsigned int value, unsigned int weight,QString description, QImage illustration,
               unsigned int damage, unsigned int range, unsigned int armorPiercing, unsigned int ammunition, Element element):
    Item(name,value,weight,description,illustration)
{

}

unsigned int weapon::getDamage() const
{
    return damage;
}

unsigned int weapon::getRange() const
{
    return range;
}

unsigned int weapon::getArmorPiercing() const
{
    return armorPiercing;
}

unsigned int weapon::getAmmunition() const
{
    return ammunition;
}

Element weapon::getElement() const
{
    return element;
}
