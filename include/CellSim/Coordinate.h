#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
    public:
        Coordinate();
        Coordinate(int x,int y);

        // Getters
        int getXPosition() const;
        int getYPosition() const;

        // Setters
        void setXPosition(int x);
        void setYPosition(int y);

    private:
        int xPosition;
        int yPosition;
};
#endif