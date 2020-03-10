#ifndef CHARACTER_H
#define CHARACTER_H
#include <QObject>
#include "Race.h"

class Character
{
public:
    Character();
    QString getName() const;
    void setName(const QString &value);

    unsigned int getAge() const;
    void setAge(unsigned int value);

    Race getRace() const;
    void setRace(const Race &value);

    QImage *getDesign() const;
    void setDesign(QImage *value);

    unsigned int getExp() const;
    void setExp(unsigned int value);

    unsigned int getLevel() const;
    void setLevel(unsigned int value);

    unsigned int getStrength() const;
    void setStrength(unsigned int value);

    unsigned int getDexterity() const;
    void setDexterity(unsigned int value);

    unsigned int getMind() const;
    void setMind(unsigned int value);

    unsigned int getCharisma() const;
    void setCharisma(unsigned int value);

    unsigned int getDefense() const;

private:
    QString name;
    unsigned int age;
    Race race;
    QImage* design;
    unsigned int exp;
    unsigned int level;
    unsigned int strength;
    unsigned int dexterity;
    unsigned int mind;
    unsigned int charisma;
    unsigned int defense;

};

#endif // CHARACTER_H
