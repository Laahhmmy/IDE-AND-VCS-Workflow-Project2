// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;
int main() {
	BasicShape* shapes[5];
	shapes[0] = new Circle(1, 1, 3, "Circle 1");
	shapes[1] = new Circle(5, 5, 8, "Circle 2");
	shapes[2] = new Rectangle(4, 10, "Rectangle 1");
	shapes[3] = new Rectangle(7, 2, "Rectangle 2");
	shapes[4] = new Square(6, "Square");
    cout << fixed << showpoint;
    cout.precision(2);

    for (int i = 0; i < 5; i++) {
        cout << shapes[i]->getName()
            << " has area = "
            << shapes[i]->getArea() << endl;
    }

    // Clean up
    for (int i = 0; i < 5; i++) {
        delete shapes[i];
    }

    return 0;
}

