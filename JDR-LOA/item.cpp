#include "item.h"
#include <QObject>
#include <QVector>
#include <QImage>



Item::Item(QString name, unsigned int value, unsigned int weight, QString description, QImage illustration)
{

}

unsigned int Item::getId() const
{
    return id;
}

QString Item::getName() const
{
    return name;
}

unsigned int Item::getValue() const
{
    return value;
}

unsigned int Item::getWeight() const
{
    return weight;
}

QString Item::getDescription() const
{
    return description;
}

QImage Item::getIllustration() const
{
    return illustration;
}
