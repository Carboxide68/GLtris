#pragma once
#include "../common/renderer.h"
#include "shapes.h"
#include "board.h"

class Tile {

public:

	Tile(int texture);

	void setTexture(int texture);

	int getTexture() const;

private:

	int m_Texture;

};

class TetrisEntity {

public:

	TetrisEntity(int color);

	void rotate(int dir);

	Shape getShape() const;

	Vec2 pos;
	int texture;

private:

	int m_Shape;
	int m_Rotation;

};