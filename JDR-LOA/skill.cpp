#include "skill.h"

Skill::Skill(QString name, Attribute attribute)
{

}

QString Skill::getName() const
{
    return name;
}

Attribute Skill::getAttribute() const
{
    return attribute;
}

unsigned int Skill::getBaseValue() const
{
    return baseValue;
}

void Skill::setBaseValue(unsigned int value)
{
    baseValue = value;
}

unsigned int Skill::getValue() const
{
    return value;
}

void Skill::setValue(unsigned int val)
{
    value = val;
}

unsigned int Skill::getModifier() const
{
    return modifier;
}

void Skill::setModifier(unsigned int value)
{
    modifier = value;
}


