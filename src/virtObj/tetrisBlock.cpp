#include "tetrisBlock.h"

Tile::Tile(int texture) {

	m_Texture = texture;

}

void Tile::setTexture(int texture) {

	m_Texture = texture;

}

int Tile::getTexture() const {

	return m_Texture;

}


TetrisEntity::TetrisEntity(int texture) {

	m_Rotation = 0;
	m_Texture = texture;

}

void TetrisEntity::rotate(int dir) {

	m_Rotation += dir;
	
	if (dir > 3) {

		m_Rotation -= 4;

	}
}

Shape TetrisEntity::getShape() const {

	return shapes[m_Shape][m_Rotation];

}

// void TetrisEntity::solidify(Board &board) {

// 	for (int i = 0; i < 5; i++) {
// 		board[shapes[m_Shape][m_Rotation].x + ];
// 	}

// }