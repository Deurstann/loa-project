#include "inventory.h"

Inventory::Inventory()
{

}

unsigned int Inventory::getCapacity() const
{
    return capacity;
}

void Inventory::setCapacity(unsigned int value)
{
    capacity = value;
}
