#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
using namespace std;

// PoliceOfficer class definition
// This class represents a police officer who can inspect parked cars and issue parking tickets.
// It contains the officer's name and badge number, and a method to inspect a car against a parking meter.
// If the car has been parked longer than the time purchased on the meter, a ParkingTicket is issued.
class PoliceOfficer {
private:
	string name;
	string badgeNumber;
public:
	PoliceOfficer(string nme = " ", string badgeNum = " ") // constructor
		: name(nme), badgeNumber(badgeNum) { 
	}
	ParkingTicket* inspectCar(const ParkedCar& car, const ParkingMeter& meter) const { // method to inspect car
		int illegalMinutes = car.getMinutesParked() - meter.getMinutesPurchased();
		if (illegalMinutes > 0) {
			return new ParkingTicket(car, name, badgeNumber, illegalMinutes);
		}
		return nullptr;
	}
	// Precondition: None
	// Postcondition: Returns the name of the police officer
};


#endif // POLICEOFFICER_H