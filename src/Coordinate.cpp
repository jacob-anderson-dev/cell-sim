#include "../include/CellSim/Coordinate.h"

Coordinate::Coordinate()
{
    setXPosition(0);
    setYPosition(0);
}

Coordinate::Coordinate(int x, int y)
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