#ifndef ENTITY_H
#define ENTITY_H

#pragma once

#include "../include/CellSim/Coordinate.h"

class Entity 
{

public:
    Entity();
    ~Entity();
    Coordinate getCoordinate() const;
    void setCoordinate(Coordinate coordinate);
private:
    Coordinate coordinate;
};

#endif

/*
    xPosition = 0
    yPosition = 0
    currentLocation = vector(xPosition, yPosition)
*/