#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>
using namespace std;

// This class represents a parked car with its details.
// It includes the car's make, model, color, license number, and the number of minutes it has been parked.
class ParkedCar {
	private:
	string make;
	string model;
	string color;
	string licenseNumber;
	int minutesParked;
public:
	ParkedCar(string mk, string md, string clr, string licNum, int minParked)  // Constructor
		: make(mk), model(md), color(clr), licenseNumber(licNum), minutesParked(minParked) {
	} // Initializer list
	string getMake() const { return make; }
	// Precondition: None
	// Postcondition: Returns the make of the car
	string getModel() const { return model; }
	// Precondition: None
	// Postcondition: Returns the model of the car
	string getColor() const { return color; }
	// Precondition: None
	// Postcondition: Returns the color of the car
	string getLicenseNumber() const { return licenseNumber; }
	// Precondition: None
	// Postcondition: Returns the license number of the car
	int getMinutesParked() const { return minutesParked; }
	// Precondition: None
	// Postcondition: Returns the number of minutes the car has been parked
};

#endif