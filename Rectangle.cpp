#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, string n)
    : length(l), width(w)
{
    setName(n);
    calcArea();
}

void Rectangle::calcArea() {
    double a = length * width;
    setArea(a);
}