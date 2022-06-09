#ifndef EATER_H
#define EATER_H

#pragma once

class Eater
{

public:
    Eater();
    ~Eater();

private:
};

#endif

/*
    if self.touching(self, food):
        eat(food)
            self.giveEnergy(self, 1, food.foodEnergyAmount)
            destroy(food)
*/