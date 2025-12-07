#include "Circle.h"
#include <cmath>

Circle::Circle(double x, double y, double r, string n)
    : xCenter(x), yCenter(y), radius(r)
{
    setName(n);
    calcArea();  // compute area immediately
}

void Circle::calcArea() {
    double a = 3.14159 * radius * radius;
    setArea(a);
}