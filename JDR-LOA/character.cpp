#include "character.h"
#include <QObject>

Character::Character()
{

}

QString Character::getName() const
{
    return name;
}

void Character::setName(const QString &value)
{
    name = value;
}

unsigned int Character::getAge() const
{
    return age;
}

void Character::setAge(unsigned int value)
{
    age = value;
}

Race Character::getRace() const
{
    return race;
}

void Character::setRace(const Race &value)
{
    race = value;
}

QImage *Character::getDesign() const
{
    return design;
}

void Character::setDesign(QImage *value)
{
    design = value;
}

unsigned int Character::getExp() const
{
    return exp;
}

void Character::setExp(unsigned int value)
{
    exp = value;
}

unsigned int Character::getLevel() const
{
    return level;
}

void Character::setLevel(unsigned int value)
{
    level = value;
}

unsigned int Character::getStrength() const
{
    return strength;
}

void Character::setStrength(unsigned int value)
{
    strength = value;
}

unsigned int Character::getDexterity() const
{
    return dexterity;
}

void Character::setDexterity(unsigned int value)
{
    dexterity = value;
}

unsigned int Character::getMind() const
{
    return mind;
}

void Character::setMind(unsigned int value)
{
    mind = value;
}

unsigned int Character::getCharisma() const
{
    return charisma;
}

void Character::setCharisma(unsigned int value)
{
    charisma = value;
}

unsigned int Character::getDefense() const
{
    return defense;
}

unsigned int Character::getPvMax() const
{
    return pvMax;
}

void Character::setPvMax(unsigned int value)
{
    pvMax = value;
}

unsigned int Character::getPv() const
{
    return pv;
}

void Character::setPv(unsigned int value)
{
    pv = value;
}

unsigned int Character::getManaMax() const
{
    return manaMax;
}

void Character::setManaMax(unsigned int value)
{
    manaMax = value;
}

unsigned int Character::getMana() const
{
    return mana;
}

void Character::setMana(unsigned int value)
{
    mana = value;
}
