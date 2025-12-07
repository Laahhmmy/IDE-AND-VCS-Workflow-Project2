#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
class Circle : public BasicShape {
private:
	double radius;
	double xCenter;
	double yCenter;
public:
    Circle(double x, double y, double r, string n = "Circle");

    // Getters
    double getX() const { return xCenter; }
    double getY() const { return yCenter; }
    double getRadius() const { return radius; }

    // Override
    void calcArea() override;

};
#endif


