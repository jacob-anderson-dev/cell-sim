class Coordinate {
    private:
        int xPosition;
        int yPosition;

    public:
        Coordinate(int x,int y);

        // Getters
        int getXPosition() const;
        int getYPosition() const;

        // Setters
        void setXPosition(int x);
        void setYPosition(int y);
};
