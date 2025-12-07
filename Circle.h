#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
// This class represents a Circle shape, derived from BasicShape
// It includes properties for radius and center coordinates, and overrides the area calculation method.
class Circle : public BasicShape {
private:
	double radius; // Radius of the circle
	double xCenter; // X coordinate of the center
	double yCenter; // Y coordinate of the center
public:
	Circle(double x, double y, double r, string n = "Circle"); // Constructor
	// Precondition: r > 0
	// Postcondition: Creates a Circle object with specified center (x, y) and radius r
    // Getters
    double getX() const { return xCenter; }
	// Precondition: None
	// Postcondition: Returns the X coordinate of the center of the circle
    double getY() const { return yCenter; }
	// precondition: None
	// Postcondition: Returns the Y coordinate of the center of the circle
    double getRadius() const { return radius; }
	// Precondition: None
	// Postcondition: Returns the radius of the circle

    // Override
    void calcArea() override;
	// Precondition: None
	// Postcondition: Calculates and sets the area of the circle using the formula area = π * r^2

};
#endif


