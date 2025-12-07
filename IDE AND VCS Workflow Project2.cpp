// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;
int main() {
	BasicShape* shapes[5]; // Array of pointers to BasicShape
	shapes[0] = new Circle(1, 1, 3, "Circle 1"); // Creating Circle object
	shapes[1] = new Circle(5, 5, 8, "Circle 2"); 
	shapes[2] = new Rectangle(4, 10, "Rectangle 1"); // Creating Rectangle object
	shapes[3] = new Rectangle(7, 2, "Rectangle 2");
	shapes[4] = new Square(6, "Square"); // Creating Square object
	cout << fixed << showpoint; // Format output
	cout.precision(2); // Set precision to 2 decimal places

	for (int i = 0; i < 5; i++) { // Iterate through shapes and display area
        cout << shapes[i]->getName()
            << " has area = "
            << shapes[i]->getArea() << endl;
    }

    // Clean up
	for (int i = 0; i < 5; i++) { // Delete allocated shapes
        delete shapes[i];
    }

    return 0;
}

