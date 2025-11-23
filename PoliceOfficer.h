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
	PoliceOfficer(string nme, string badgeNum);

	ParkingTicket inspectCar(const ParkedCar& car, const ParkingMeter& meter) const;


