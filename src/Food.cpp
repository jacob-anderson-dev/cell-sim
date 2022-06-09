#include "../include/CellSim/Food.h"

Food::Food(int energyValue=1)
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