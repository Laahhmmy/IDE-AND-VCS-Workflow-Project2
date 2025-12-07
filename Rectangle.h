#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"
class Rectangle : public BasicShape {
private:
		double width;
		double length;

public:
	Rectangle(double l, double w, string n = "Rectangle");

	double getLength() const { return length; }
	double getWidth() const { return width; }

	void calcArea() override;


};
#endif
