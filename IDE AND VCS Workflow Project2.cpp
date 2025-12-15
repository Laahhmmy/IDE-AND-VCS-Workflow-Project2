// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program demonstrates the use of classes to manage employee records for Production Workers, Shift Supervisors, and Team Leaders.
// It allows users to create and display records for each type of employee interactively.


#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

// Function to create a ProductionWorker interactively
void createProductionWorker() { 
    string name, hireDate;
    int empNum, shift;
    double rate;
    ProductionWorker worker;

    cin.ignore(); // Clear input buffer

    cout << "Enter Production Worker's name: "; 
    getline(cin, name);
    worker.setName(name);

    while (true) {
        try {
            cout << "Enter employee number (0-9999): ";
            cin >> empNum;
            worker.setEmployeeNumber(empNum);
            break;
        }
        catch (Employee::InvalidEmployeeNumber&) {
            cout << "Error: Employee number must be between 0 and 9999.\n";
        }
    }

    cin.ignore();
    cout << "Enter hire date (MM/DD/YYYY): ";
    getline(cin, hireDate);
    worker.setHireDate(hireDate);

    while (true) {
        try {
            cout << "Enter shift (1 = Day, 2 = Night): ";
            cin >> shift;
            worker.setShift(shift);
            break;
        }
        catch (ProductionWorker::InvalidShift&) {
            cout << "Error: Shift must be 1 or 2.\n";
        }
    }

    while (true) {
        try {
            cout << "Enter hourly pay rate: ";
            cin >> rate;
            worker.setHourlyPayRate(rate);
            break;
        }
        catch (ProductionWorker::InvalidPayRate&) {
            cout << "Error: Pay rate cannot be negative.\n";
        }
    }

    cout << "\n=== Production Worker Record ===\n";
    worker.printProductionWorker();
}

// Function to create a ShiftSupervisor interactively
void createShiftSupervisor() {
    string name, hireDate;
    int empNum;
    double salary, bonus;
    ShiftSupervisor supervisor;

    cin.ignore();
    cout << "Enter Shift Supervisor's name: ";
    getline(cin, name);
    supervisor.setName(name);

    while (true) {
        try {
            cout << "Enter employee number (0-9999): ";
            cin >> empNum;
            supervisor.setEmployeeNumber(empNum);
            break;
        }
        catch (Employee::InvalidEmployeeNumber&) {
            cout << "Error: Employee number must be between 0 and 9999.\n";
        }
    }

    cin.ignore();
    cout << "Enter hire date (MM/DD/YYYY): ";
    getline(cin, hireDate);
    supervisor.setHireDate(hireDate);

    cout << "Enter annual salary: ";
    cin >> salary;
    supervisor.setAnnualSalary(salary);

    cout << "Enter production bonus: ";
    cin >> bonus;
    supervisor.setProductionBonus(bonus);

    cout << "\n=== Shift Supervisor Record ===\n";
    supervisor.printShiftSupervisor();
}

// Function to create a TeamLeader interactively
void createTeamLeader() {
    string name, hireDate;
    int empNum, shift, requiredHours, attendedHours;
    double rate, monthlyBonus;
    TeamLeader leader;

    cin.ignore();
    cout << "Enter Team Leader's name: ";
    getline(cin, name);
    leader.setName(name);

    while (true) {
        try {
            cout << "Enter employee number (0-9999): ";
            cin >> empNum;
            leader.setEmployeeNumber(empNum);
            break;
        }
        catch (Employee::InvalidEmployeeNumber&) {
            cout << "Error: Employee number must be between 0 and 9999.\n";
        }
    }

    cin.ignore();
    cout << "Enter hire date (MM/DD/YYYY): ";
    getline(cin, hireDate);
    leader.setHireDate(hireDate);

    while (true) {
        try {
            cout << "Enter shift (1 = Day, 2 = Night): ";
            cin >> shift;
            leader.setShift(shift);
            break;
        }
        catch (ProductionWorker::InvalidShift&) {
            cout << "Error: Shift must be 1 or 2.\n";
        }
    }

    while (true) {
        try {
            cout << "Enter hourly pay rate: ";
            cin >> rate;
            leader.setHourlyPayRate(rate);
            break;
        }
        catch (ProductionWorker::InvalidPayRate&) {
            cout << "Error: Pay rate cannot be negative.\n";
        }
    }

    cout << "Enter monthly bonus: ";
    cin >> monthlyBonus;
    leader.setMonthlyBonus(monthlyBonus);

    cout << "Enter required training hours: ";
    cin >> requiredHours;
    leader.setRequiredTrainingHours(requiredHours);

    cout << "Enter attended training hours: ";
    cin >> attendedHours;
    leader.setAttendedTrainingHours(attendedHours);

    cout << "\n=== Team Leader Record ===\n";
    leader.printTeamLeader();
}

int main() {
    int choice;

    do {
        cout << "\n===== Employee Menu =====\n";
        cout << "1. Create Production Worker\n";
        cout << "2. Create Shift Supervisor\n";
        cout << "3. Create Team Leader\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            createProductionWorker();
            break;
        case 2:
            createShiftSupervisor();
            break;
        case 3:
            createTeamLeader();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}



