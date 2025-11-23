#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include <string>
using namespace std;
class ParkingMeter {
	private:
		int minutesPurchased;
	public:
		ParkingMeter(int minutes) : minutesPurchased(minutes) {}
		int getMinutesPurchased() const { return minutesPurchased; }
};
#endif // PARKINGMETER_H

