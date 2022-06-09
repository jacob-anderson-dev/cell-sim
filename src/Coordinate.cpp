#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
    private:
        int xPosition;
        int yPosition;

    public:
        Coordinate(int x,int y){
            setXPosition(x);
            setYPosition(y);
        }

        // Getters
        int getXPosition() {
            return xPosition;
        }
        int getYPosition(){
            return yPosition;
        }

        // Setters
        void setXPosition(int x) {
            xPosition = x;
        }
        void setYPosition(int y){
            yPosition = y;
        }
};

#endif