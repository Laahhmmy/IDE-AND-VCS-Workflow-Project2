#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include <string>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
using namespace std;
class PoliceOfficer {
private:
	string name;
	string badgeNumber;
public:
	PoliceOfficer(string nme = " ", string badgeNum = " ")
		: name(nme), badgeNumber(badgeNum) {
	}
	ParkingTicket* inspectCar(const ParkedCar& car, const ParkingMeter& meter) const {
		int illegalMinutes = car.getMinutesParked() - meter.getMinutesPurchased();
		if (illegalMinutes > 0) {
			return new ParkingTicket(car, name, badgeNumber, illegalMinutes);
		}
		return nullptr;
	}
};


#endif // POLICEOFFICER_H