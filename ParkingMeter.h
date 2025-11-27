#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include <string>
using namespace std;

// Class representing a parking meter
// Stores the number of minutes purchased
// Provides a method to retrieve the minutes purchased
class ParkingMeter {
	private:
		int minutesPurchased;
	public:
		ParkingMeter(int minutes) : minutesPurchased(minutes) {} // Constructor
		int getMinutesPurchased() const { return minutesPurchased; } // Getter for minutes purchased
};
#endif // PARKINGMETER_H

