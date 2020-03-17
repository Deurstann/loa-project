#include "armor.h"
#include "item.h"

Armor::Armor(QString name, unsigned int value, unsigned int weight,QString description, QImage illustration,
             unsigned int armorPoints, Element element):Item(name,value,weight,description,illustration)
{

}


unsigned int Armor::getArmorPoints() const
{
    return armorPoints;
}

Element Armor::getElement() const
{
    return element;
}
