#include "../common/renderer.h"

class Block {

public:

	Block(int x, int y);

private:

	Vec2 m_Pos;

};

class TetrisTile {

public:

	TetrisTile(Block block, int color);

private:

	int m_Color;
	Block m_Block;

};

struct Shape {

	Block blocks[4];

};

class TetrisEntity {

public:

	TetrisEntity();

	void rotate(int dir);

private:

	void m_Rotate(int dir);
	void m_RotateNES(int dir);

	int color;
	int rotation;
	Shape shape;
};