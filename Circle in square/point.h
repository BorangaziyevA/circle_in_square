#pragma once
#include<iostream>
using namespace std;

class point
{
	int x;
	int y;
public:
	point(int x, int y)
	{
		setPoint(x, y);
	}
	void setX(int x){this->x = x;}
	int getX()const { return x; }
	void setY(int y) { this->y = y; }
	int getY()const { return y; }
	void setPoint(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

};

