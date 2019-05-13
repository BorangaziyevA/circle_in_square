#pragma once
#include"point.h"
#include<math.h>
#define PE 3.14159265358979

class circle :public point
{
	int radius;
public:
	circle(int radius, int x, int y)
		:point(x, y)
	{
		this->radius = radius;
	}
	int getDiametr() { return radius * 2; }
	int getRadius()const { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	float getArea()const {return PE * radius*radius;}
	float getLength()const{return 2 * PE *  radius;}
};
