#include "item.h"
#ifndef WEAPON_H
#define WEAPON_H

#include <QObject>

class weapon : public item
{
public:
    weapon();
private:
    unsigned int damage;
    unsigned int range;
    unsigned int armorPiercing;
    unsigned int ammunition;

};

#endif // WEAPON_H
