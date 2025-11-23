// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;
int main() {
    ParkedCar car("Toyota", "Camry", "Red", "XYZ123", 30);
    ParkingMeter meter(40);
    PoliceOfficer officer("Officer John Doe", "5678");

    ParkingTicket* ticket = officer.inspectCar(car, meter);

    if (ticket) {
        ticket->printTicket();
        delete ticket;
    }
    else {
        cout << "No violations found.\n";
    }

    return 0;

}

