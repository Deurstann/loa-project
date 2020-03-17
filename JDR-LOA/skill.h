#ifndef SKILL_H
#define SKILL_H

#include <QObject>
#include "attribute.h"

class Skill
{
public:
    Skill();
    QString getName() const;

    Attribute getAttribute() const;

    unsigned int getBaseValue() const;
    void setBaseValue(unsigned int value);

    unsigned int getValue() const;
    void setValue(unsigned int value);

    unsigned int getModifier() const;
    void setModifier(unsigned int value);

private:
    QString name;
    Attribute attribute;
    unsigned int baseValue;
    unsigned int value;
    unsigned int modifier;
};

#endif // SKILL_H
