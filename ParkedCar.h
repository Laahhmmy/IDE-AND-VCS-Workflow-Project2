#ifndef PARKEDCAR_H
#define PARKEDCAR_H
#include <string>
using namespace std;
class ParkedCar {
	private:
	string make;
	string model;
	string color;
	string licenseNumber;
	int minutesParked;
public:
	ParkedCar(string mk, string md, string clr, string licNum, int minParked) 
		: make(mk), model(md), color(clr), licenseNumber(licNum), minutesParked(minParked) {}
	string getMake() const { return make; }
	string getModel() const { return model; }
	string getColor() const { return color; }
	string getLicenseNumber() const { return licenseNumber; }
	int getMinutesParked() const { return minutesParked; }
};

#endif