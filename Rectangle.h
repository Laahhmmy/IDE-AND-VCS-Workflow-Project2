#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"
// This class represents a rectangle shape, derived from BasicShape
// It includes attributes for width and length, and a method to calculate the area.
class Rectangle : public BasicShape {
private:
	double width; // width of the rectangle
	double length;

public:
	Rectangle(double l, double w, string n = "Rectangle"); // Constructor with length, width, and optional name
	// Precondition: l and w must be positive values
	// Postcondition: A Rectangle object is created with specified length and width
	double getLength() const { return length; }
	// Precondition: None
	// Postcondition: Returns the length of the rectangle
	double getWidth() const { return width; }
	// Precondition: None
	// Postcondition: Returns the width of the rectangle
	void calcArea() override;
	// Precondition: None
	// Postcondition: Calculates and sets the area of the rectangle (length * width)

};
#endif
