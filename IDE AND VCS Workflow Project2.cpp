// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// In this program, we will test the Date class by creating
// Date objects using different constructors and methods,
// and printing the results to verify correctness.

#include <iostream>
#include "Date.h"
using namespace std;
int main() {
    // 1. Default constructor
    Date d1;
    cout << "Default date: " << d1.printDate() << endl;

    // 2. Constructor with parameters
    Date d2(4, 18, 2018);
    cout << "Param date (long): " << d2.printDateLong() << endl;

    // 3. Test setDate() using third format
    d1.setDate(7, 4, 2020);
    cout << "Set date (other long): " << d1.printOtherLong() << endl;

    // 4. Invalid date 13/45/2018
    d1.setDate(13, 45, 2018);

    // 5. Invalid date April 31, 2000
    d1.setDate(4, 31, 2000);

    // 6. Invalid leap day (2009 is not leap)
    d1.setDate(2, 29, 2009);

    // 7. Test subtraction (should be 8)
    d1.setDate(4, 10, 2014);
    d2.setDate(4, 18, 2014);
    cout << "Days apart: " << (d2 - d1) << endl;

    // 8. Test subtraction (should be 815)
    d1.setDate(2, 2, 2006);
    d2.setDate(11, 10, 2003);
    cout << "Days apart: " << (d1 - d2) << endl;

    // 9. Test pre-increment and pre-decrement
    d1.setDate(2, 29, 2008);
    ++d1;
    cout << "After ++d1: " << d1.printDate() << endl;
    --d1;
    cout << "After --d1: " << d1.printDate() << endl;

    // 10. Test post-increment and post-decrement
    d1++;
    d1--;
    cout << "After d1++ then d1--: " << d1.printDate() << endl;

    // 11. Test rollover on post-increment
    d1.setDate(12, 31, 2024);
    d1++;
    cout << "After 12/31/2024 d1++: " << d1.printDate() << endl;
    d1--;
    cout << "After d1--: " << d1.printDate() << endl;

    // 12. Test rollover using pre-increment
    d1.setDate(12, 31, 2024);
    ++d1;
    cout << "After ++d1: " << d1.printDate() << endl;
    --d1;
    cout << "After --d1: " << d1.printDate() << endl;

    // 13. Input using >>
    Date inputDate;
    cout << "Enter a date (MM/DD/YYYY): ";
    cin >> inputDate;

    // 14. Output using <<
    cout << "You entered: " << inputDate << endl;

    return 0;
}



