#include "../include/CellSim/Grid.h"

/*
    cells = 2 dimensional array of all entities in grid
    createEntity(location)
    createFood(location)
    createCell(location)
    step()
        for (cell in cells) {
            cell.step()
        }
    play()
        running = true
        while (running) {
            step()
            if (quit) {
                running = false
            }
        }
*/

Grid::Grid()
{
}

Grid::~Grid()
{
}