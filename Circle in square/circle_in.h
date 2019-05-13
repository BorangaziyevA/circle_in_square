#pragma once
#include"circle.h"
#include"square.h"

class circle_in_square :virtual public square, virtual public circle
{

public:
	circle_in_square(int x, int y, int radius)
		:square(radius*2, x - radius, y + radius),
		circle(radius,x,y)
	{}
	int getX()const { return circle::getX(); }
	int getY()const { return circle::getY(); }
	void setX(int x) {
		circle::setX(x); 
		square::setX(x - getRadius());
	}
	void setY(int y) {
		circle::setY(y); 
		square::setY(y + getRadius());
	}
	void setRadius(int radius)
	{
		circle::setRadius(radius);
		square::setSide(radius*2);
		square::setPoint(square::getX() - radius, square::getY() + radius);
	}
	void setSide(int side)
	{
		square::setSide(side);
		circle::setRadius(side / 2);
		square::setX(square::getX() - circle::getRadius());
		square::setY(square::getY() + circle::getRadius());
	}
};