#pragma once
#include"point.h"

class square :public point
{
	int side;
public:
	square(int side, int x, int y)
		:point(x,y)
	{
		setSide(side);
	}
	int getSide() { return side; }
	void setSide(int side) { this->side = side; }
	int getArea() { return side * side; }
	int getPerimetr() { return 4 * side; }
};