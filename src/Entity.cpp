#include "../include/CellSim/Entity.h"
#include "../include/CellSim/Coordinate.h"
/*
    xPosition = 0
    yPosition = 0
    currentLocation = vector(xPosition, yPosition)
*/

Entity::Entity()
{
    
}

Entity::~Entity()
{
}

Coordinate Entity::getCoordinate() const
{
    return coordinate;
}

void Entity::setCoordinate(Coordinate coordinate)
{
    this->coordinate = coordinate;
}