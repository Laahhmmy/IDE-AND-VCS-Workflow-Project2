#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include <iostream> // Added to fix the undefined 'cout' and 'endl' errors
#include <string>
#include "ParkedCar.h"
using namespace std;

class ParkingTicket {
	private:
	string carMake;
	string carModel;
	string carColor;
	string carLicense;
	string OfficerName;
	string OfficerBadgeNumber;
	int minutesIllegal;
	double fineAmount;
public:
	ParkingTicket(const ParkedCar& car, string name, string badge, int illegalMin)
		: OfficerName(name), OfficerBadgeNumber(badge), minutesIllegal(illegalMin)
	{
		carMake = car.getMake();
		carModel = car.getModel();
		carColor = car.getColor();
		carLicense = car.getLicenseNumber();
		calculateFine();
	}
	void calculateFine() {
		int hours = (minutesIllegal + 59) / 60;
		if (hours <= 1) fineAmount = 25.0;
		else fineAmount = 25.0 + (hours - 1) * 10.0;
	}
	void printTicket() const {

		cout << "----- Parking Ticket -----" << endl;
		cout << "Car Make: " << carMake << endl;
		cout << "Car Model: " << carModel << endl;
		cout << "Car Color: " << carColor << endl;
		cout << "License Number: " << carLicense << endl;
		cout << "Officer Name: " << OfficerName << endl;
		cout << "Officer Badge Number: " << OfficerBadgeNumber << endl;
		cout << "Minutes Illegal: " << minutesIllegal << endl;
		cout << "Fine Amount: $" << fineAmount << endl;
		cout << "--------------------------" << endl;
	}
};

#endif // PARKING_TICKET_H