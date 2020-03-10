#include "item.h"
#include <QObject>
#include <QVector>
#include <QImage>



item::item(QString name, unsigned int value, unsigned int weight, QString description, QImage illustration)
{

}

unsigned int item::getId() const
{
    return id;
}

QString item::getName() const
{
    return name;
}

unsigned int item::getValue() const
{
    return value;
}

unsigned int item::getWeight() const
{
    return weight;
}

QString item::getDescription() const
{
    return description;
}

QImage item::getIllustration() const
{
    return illustration;
}
