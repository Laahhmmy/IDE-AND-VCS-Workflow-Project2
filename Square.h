#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"
// This class represents a square, which is a special case of a rectangle
// It inherits from the Rectangle class
// It has one additional attribute: side
// It has a constructor that takes the side length and an optional name parameter
// It has a getter method for the side attribute

class Square : public Rectangle
{
private: 
	double side; // Length of the side of the square
public:
	Square(double s, string n = "Square"); // Constructor with side length and optional name
	// Precondition: s > 0
	// Postcondition: side is set to s, and Rectangle constructor is called with width and height equal to s
	double getSide() const { return side; } // Getter for side
	// PRecondition: none
	// Postcondition: returns the length of the side of the square
};

#endif

