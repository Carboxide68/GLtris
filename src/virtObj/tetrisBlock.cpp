#include "tetrisBlock.h"

#ifdef NESROTATION
Shape shapes[7] = {
	{Block(0, -1), Block(0,  0), Block( 0, 1), Block(-1,  0)}, //T-shape
	{Block(0, -1), Block(0,  0), Block( 0, 1), Block(-1,  1)}, //J-shape
	{Block(0, -1), Block(0,  0), Block(-1, 0), Block(-1,  1)}, //Z-shape
	{Block(0,  0), Block(0, -1), Block(-1, 0), Block(-1,  1)}, //O-shape
	{Block(0,  0), Block(0,  1), Block(-1, 0), Block(-1, -1)}, //S-shape
	{Block(0, -1), Block(0,  0), Block( 0, 1), Block(-1, -1)}, //L-shape
	{Block(0, -2), Block(0, -1), Block( 0, 0), Block( 0,  1)}  //I-shape
};

#else

#endif

Block::Block(int x, int y) {
	m_Pos.x = x;
	m_Pos.y = y;
}

TetrisTile::TetrisTile(Block block, int color) : m_Block(block), m_Color(color){}

void TetrisEntity::rotate(int dir) {



}