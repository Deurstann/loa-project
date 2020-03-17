#ifndef ITEM_H
#define ITEM_H

#include <QObject>
#include <QImage>

class Item
{
public:
    Item(QString name, unsigned int value, unsigned int weight,QString description, QImage illustration);
    bool operator==(Item i);
    bool operator<(Item i);

    unsigned int getId() const;

    QString getName() const;

    unsigned int getValue() const;

    unsigned int getWeight() const;

    QString getDescription() const;

    QImage getIllustration() const;

private:
    static unsigned int id_max;
    unsigned int id;
    QString name;
    unsigned int occurences;
    unsigned int value;
    unsigned int weight;
    QString description;
    QImage illustration;
};

#endif // ITEM_H
