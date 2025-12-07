#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle
{
private: 
	double side;
public:
	Square(double s, string n = "Square");

	double getSide() const { return side; }
};

#endif

