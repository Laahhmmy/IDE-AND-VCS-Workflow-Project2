#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>
using namespace std;
// This class serves as a base class for different geometric shapes
// It contains common attributes like area and name, and a pure virtual function to calculate area
// Derived classes must implement the calcArea() method

class BasicShape
{
private:
	double area; // Area of the shape
	string name; // Name of the shape
public:
	BasicShape() : area(0), name("") {} // Default constructor
	// Precondition: a >= 0
	// Postcondition: area is set to a, name is set to n
	virtual ~BasicShape() {} // Virtual destructor
	// Precondition: None
	// Postcondition: Returns the area of the shape
	double getArea() const { return area; } // Getter for area
	// Precondition: None
	// Postcondition: Returns the name of the shape
	string getName() const { return name; }// Getter for name
	// Precondition: a >= 0
	// Postcondition: Sets the area to a
	void setArea(double a) { area = a; } // Setter for area
	// Precondition: None
	// Postcondition: Sets the name to n
	void setName(const string& n) { name = n; } // Setter for name
	// Precondition: None
	// Postcondition: Pure virtual function to calculate area, must be implemented by derived classes
	virtual void calcArea() = 0; // Pure virtual function
	// Precondition: None
	// Postcondition: Returns a string representation of the shape
};
#endif
