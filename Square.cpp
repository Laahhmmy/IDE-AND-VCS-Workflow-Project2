#include "Square.h"

Square::Square(double s, string n)
    : Rectangle(s, s, n), side(s)
{
    setName(n);  
}