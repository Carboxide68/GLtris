#include "board.h"

Board::Board(int x, int y) {

    width = x;
    height = y;

    m_Board.size = x * y;

}

void Board::setSquare(int x, int y, int texture) {

    m_Board[x + y * height].setTexture(texture);

}

int Board::getSquare(int x, int y) const {

    return m_Board[x + y * height].getTexture();

}

int Board::getSquare(Vec2 pos) const {

    return m_Board[pos.x + pos.y * height].getTexture();

}