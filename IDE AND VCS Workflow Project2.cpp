// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// In this program, we will test the Date class by creating
// Date objects using different constructors and methods,
// and printing the results to verify correctness.

#include <iostream>
#include "Date.h"
using namespace std;
int main() {
	cout << "Test Default Constructor: " << endl; // Current date should be displayed
	Date date1;
	cout << date1.printDate() << endl;
	cout << "\nTest constructor with valid date: " << endl; // Valid date should be displayed
	Date date2(2, 28, 2009);
	cout << date2.printDate() << endl;
	cout << "\nTest constructor with invalid date (45, 2, 2009): " << endl; // Invalid date should be handled
	Date date3(45, 2, 2009);
	cout << date3.printDate() << endl;
	cout << "\nTest constructor with invalid day (2, 29, 2009): " << endl; // Invalid date should be handled
	Date date4(2, 29, 2009);
	cout << date4.printDate() << endl;
	cout << "\nTest setDate with bad month (13, 10, 2020): " << endl; // Invalid date should be handled
	date1.setDate(13, 10, 2020);
	cout << date4.printDate() << endl;
	cout << "\nTest setDate with bad day (4, 31, 2009): " << endl; // Invalid date should be handled
	date4.setDate(4, 31, 2009);
	cout << date4.printDate() << endl;
	cout << "\nTest leap year with bad date (2, 29, 2009): " << endl; // Invalid date should be handled
	date1.setDate(2, 29, 2009);
	cout << date4.printDate() << endl;
	cout << "\nTest leap year with good date (2, 29, 2012): " << endl; // Valid date should be displayed
	date1.setDate(2, 29, 2012);
	cout << date1.printDate() << endl;
	cout << "\nTest the print formats: " << endl; // All formats should be displayed correctly
	cout << date1.printDateLong() << endl;
	cout << date1.printOtherLong() << endl;
}



