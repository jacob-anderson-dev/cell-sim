#include "../include/CellSim/Cell.h"

/*
    cellEnergy = 1
    cellSplitEnergy = 2
    shareEnergyMultiplier = .25
    shareEnergyAmount = 1
    foodValue = 2

    cellSticky = true
    canLeave = true
    willMove = false
    gotEnergy = false

    cell cellArray[] getConnectedCells()
    giveEnergy(cell, energyMultiplier, energyAmount)
    destroy()
        grid.createFood(self.currentLocation)
        grid.createFood(self.currentLocation + 1)
        grid.createFood(self.currentLocation - 1)
        grid.createFood(self.currentLocation + 2)
        grid.createFood(self.currentLocation - 2)
    split()
    move()

    if self.cellEnergy == 0:
        self.destroy()

    if self.cellEnergy == self.cellSplitEnergy:
        self.split()

    if self.cellSticky
        for (cell in self.getConnectedCells()) {
            if (self.gotEnergy) {
                self.giveEnergy(cell, shareEnergyMultiplier, shareEnergyAmount)
            }
            cell.canLeave = false
        }

    if not self.canLeave && self.willMove:
        for (cell in self.getConnectedCells()) {
            cell.move()
        }

    if self.canLeave && self.willMove:
        self.move()
*/

Cell::Cell()
{
}

Cell::~Cell()
{
}