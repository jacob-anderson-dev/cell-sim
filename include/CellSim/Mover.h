#ifndef MOVER_H
#define MOVER_H

#pragma once

class Mover
{

public:
    Mover();
    ~Mover();

private:
};

#endif

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