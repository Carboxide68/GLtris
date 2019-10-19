#pragma once
#include "../common/renderer.h"
#include "tetrisBlock.h"

class Board {

public:

    Board(int x, int y);

    void setSquare(int x, int y, int texture);

    int getSquare(int x, int y) const;
    int getSquare(Vec2 p) const;

    int width;
    int height;


private:

    std::vector<Tile> m_Board;
};