#include "../include/CellSim/Mover.h"

/*
    direction = number between 0 and 7 (up down left right diagonals) -- should be an enum
    energyToMoveAdditionalCell = .25
    willMove = true

    moveConnected()
        for (cell in self.getConnectedCells()) {
            cell.willMove = true
        }

    move()
        super.move()
        self.moveConnected()

    every step
        self.move()
*/

Mover::Mover()
{
}

Mover::~Mover()
{
}