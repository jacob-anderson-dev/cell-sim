#ifndef FOOD_H
#define FOOD_H

#pragma once

#include "Entity.h"

class Food : public Entity
{

public:
    Food(int energyValue = 1);
    ~Food();
    int getEnergyValue();
    void setEnergyValue(int energyValue);

private:
    int energyValue;
};

#endif