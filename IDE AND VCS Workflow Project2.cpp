// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// In this program, a police officer inspects parked cars to determine if they have overstayed their parking time.
// If a car has overstayed, the officer issues a parking ticket. The program tests multiple scenarios with different cars and parking meters.
// The classes ParkedCar, ParkingMeter, ParkingTicket, and PoliceOfficer are used to model the relevant entities and their interactions.

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;
void runScenario(const ParkedCar& car, const ParkingMeter& meter, PoliceOfficer& officer); // Function prototype

  int main() {
	  PoliceOfficer officer("John Doe", "5678"); // Create a police officer

	  ParkedCar car1("Toyota", "Camry", "Red", "XYZ123", 40); // Create parked cars and parking meters
	  ParkingMeter meter1(60); // 60 minutes purchased

        ParkedCar car2("Honda", "Accord", "Blue", "ABC987", 70); 
        ParkingMeter meter2(60); 

        ParkedCar car3("Ford", "Mustang", "Black", "LMN456", 190);
        ParkingMeter meter3(60);

		runScenario(car1, meter1, officer); // Run scenarios
        runScenario(car2, meter2, officer);
        runScenario(car3, meter3, officer);

        return 0;

}
  void runScenario(const ParkedCar& car, const ParkingMeter& meter, PoliceOfficer& officer) { // Function definition
      cout << "\n=========================\n";
      cout << "Testing scenario:\n";
      cout << car.getColor() << " " << car.getMake() << " " << car.getModel()
          << " (" << car.getLicenseNumber() << ")" << endl;

      ParkingTicket* ticket = officer.inspectCar(car, meter);

      if (ticket) {
          ticket->printTicket();
          delete ticket;
      }
      else {
          cout << "No violation found.\n";
      }
  }