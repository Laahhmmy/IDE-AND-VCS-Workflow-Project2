#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H
#include <iostream> 
#include <string>
#include "ParkedCar.h"
using namespace std;

// ParkingTicket class definition
// This class represents a parking ticket issued to a parked car
// It contains details about the car, the issuing officer, the duration of the violation, and the fine amount
// The fine is calculated based on the number of hours the car was parked illegally

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
	ParkingTicket(const ParkedCar& car, string name, string badge, int illegalMin) // constructor
		: OfficerName(name), OfficerBadgeNumber(badge), minutesIllegal(illegalMin) // initialize officer details and illegal minutes
	{
		carMake = car.getMake(); // initialize car details
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
	// function to print the parking ticket details
	// prints car details, officer details, minutes illegal, and fine amount
	// Precondition: None
	// Postcondition: Parking ticket details are printed to the console
	void printTicket() const { // print ticket details

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