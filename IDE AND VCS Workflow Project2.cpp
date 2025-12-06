// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;
int main() {
    // --- Test ProductionWorker objects ---
    cout << "=== Production Worker 1 ===" << endl;
    ProductionWorker pw1("John Brown", "JB123", "01/15/2022", 1, 22.50);
    pw1.printProductionWorker();

    cout << "\n=== Production Worker 2 ===" << endl;
    ProductionWorker pw2("Matt Super", "MT202", "03/02/2021", 2, 24.75);
    pw2.printProductionWorker();


    // --- Test ShiftSupervisor object ---
    cout << "\n=== Shift Supervisor ===" << endl;
    ShiftSupervisor ss("Daniel Taylor", "SD777", "06/10/2020", 65000, 5000);
    ss.printShiftSupervisor();


    // --- Test TeamLeader object ---
    cout << "\n=== Team Leader ===" << endl;
    TeamLeader tl("Andrew Jonhson", "TG303", "09/05/2019",
        1,        // shift (1 = day)
        28.00,    // hourly pay rate
        300.00,   // monthly bonus
        40,       // required training hours
        35);      // attended training hours

    tl.printTeamLeader();


    return 0;

}


