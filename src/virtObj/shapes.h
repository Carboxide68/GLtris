#pragma once
#include "tetrisBlock.h"

struct Shape {

	Vec2 blocks[4];

};

const Shape shapes[7][4] = {

	//T-shape
	{
	{Vec2(0, -1), Vec2(0,  0), Vec2( 0, 1), Vec2(-1,  0)},
	{Vec2(1,  0), Vec2(0,  0), Vec2( 0, 1), Vec2(-1,  0)},
	{Vec2(0, -1), Vec2(0,  0), Vec2( 0, 1), Vec2( 1,  0)},
	{Vec2(1,  0), Vec2(0, -1), Vec2( 0, 0), Vec2(-1,  0)}
	},

	//J-shape
	{
	{Vec2(0, -1), Vec2( 0,  0), Vec2( 0,  1), Vec2(-1,  1)},
	{Vec2(1,  0), Vec2( 1,  1), Vec2( 0,  0), Vec2(-1,  0)},
	{Vec2(1, -1), Vec2( 0, -1), Vec2( 0,  0), Vec2( 0,  1)},
	{Vec2(1,  0), Vec2( 0,  0), Vec2(-1, -1), Vec2(-1,  0)}
	},

	//Z-shape
	{
	{Vec2(0, -1), Vec2(0,  0), Vec2(-1, 0), Vec2(-1,  1)},
	{Vec2(1,  0), Vec2(0,  0), Vec2(-1, 0), Vec2(-1, -1)},
	{Vec2(0, -1), Vec2(0,  0), Vec2(-1, 0), Vec2(-1,  1)},
	{Vec2(1,  0), Vec2(0,  0), Vec2(-1, 0), Vec2(-1, -1)}
	},

	//O-shape
	{
	{Vec2(0, -1), Vec2(0,  0), Vec2(-1, -1), Vec2(-1,  0)},
	{Vec2(0, -1), Vec2(0,  0), Vec2(-1, -1), Vec2(-1,  0)},
	{Vec2(0, -1), Vec2(0,  0), Vec2(-1, -1), Vec2(-1,  0)},
	{Vec2(0, -1), Vec2(0,  0), Vec2(-1, -1), Vec2(-1,  0)}
	},

	//S-shape
	{
	{Vec2(0,  0), Vec2(0,  1), Vec2(-1, 0), Vec2(-1, -1)}, 
	{Vec2(1, -1), Vec2(0, -1), Vec2( 0, 0), Vec2( 1,  0)}, 
	{Vec2(0,  0), Vec2(0,  1), Vec2(-1, 0), Vec2(-1, -1)}, 
	{Vec2(1, -1), Vec2(0, -1), Vec2( 0, 0), Vec2( 1,  0)}
	},
	
	//L-shape
	{
	{Vec2(0, -1), Vec2(0,  0), Vec2( 0, 1), Vec2(-1, -1)}, 
	{Vec2(1,  0), Vec2(0,  0), Vec2(-1, 0), Vec2(-1,  1)}, 
	{Vec2(0, -1), Vec2(0,  0), Vec2( 0, 1), Vec2( 1,  1)}, 
	{Vec2(1,  0), Vec2(0,  0), Vec2(-1, 0), Vec2( 1, -1)}, 
	},

	//I-shape
	{
	{Vec2(0, -2), Vec2(0, -1), Vec2(0, 0), Vec2( 0, 1)},
	{Vec2(2,  0), Vec2(1,  0), Vec2(0, 0), Vec2(-1, 0)},
	{Vec2(0, -2), Vec2(0, -1), Vec2(0, 0), Vec2( 0, 1)},
	{Vec2(2,  0), Vec2(1,  0), Vec2(0, 0), Vec2(-1, 0)},
	}
};