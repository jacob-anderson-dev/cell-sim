#include "../include/CellSim/Food.h"

Food::Food(int energyValue)
{
    setEnergyValue(energyValue);
}

Food::~Food()
{
}

int Food::getEnergyValue()
{
    return energyValue;
}

void Food::setEnergyValue(int energyValue)
{
    this->energyValue = energyValue;
}