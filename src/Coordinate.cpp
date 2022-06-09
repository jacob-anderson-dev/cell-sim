#include "../include/CellSim/coordinate.h"

Coordinate::Coordinate(int x,int y)
{
    setXPosition(x);
    setYPosition(y);
}

// Getters
int Coordinate::getXPosition() const
{
    return xPosition;
}
int Coordinate::getYPosition() const
{
    return yPosition;
}

// Setters
void Coordinate::setXPosition(int x)
{
    xPosition = x;
}
void Coordinate::setYPosition(int y)
{
    yPosition = y;
}