// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program demonstrates the use of classes to represent different types of employees in a company.
// It creates instances of ProductionWorker, ShiftSupervisor, and TeamLeader classes,
// sets their attributes, and prints their details to the console.

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;
int main() {

	cout << "=== Production Worker 1 ===" << endl; // Output header for the first production worker
	ProductionWorker pw1("John Brown", "JB123", "01/15/2022", 1, 22.50); // Create a ProductionWorker object
	pw1.printProductionWorker(); // Print the details of the production worker

	cout << "\n=== Production Worker 2 ===" << endl; // Output header for the second production worker
	ProductionWorker pw2("Matt Super", "MT202", "03/02/2021", 2, 24.75); // Create another ProductionWorker object
	pw2.printProductionWorker(); // Print the details of the second production worker


  
	cout << "\n=== Shift Supervisor ===" << endl; // Output header for the shift supervisor
	ShiftSupervisor ss("Daniel Taylor", "SD777", "06/10/2020", 65000, 5000); // Create a ShiftSupervisor object
	ss.printShiftSupervisor(); // Print the details of the shift supervisor


    
	cout << "\n=== Team Leader ===" << endl; // Output header for the team leader
	TeamLeader tl("Andrew Jonhson", "TG303", "09/05/2019", // Create a TeamLeader object
        1,        // shift (1 = day)
        28.00,    // hourly pay rate
        300.00,   // monthly bonus
        40,       // required training hours
        35);      // attended training hours

	tl.printTeamLeader(); // Print the details of the team leader


    return 0;

}


