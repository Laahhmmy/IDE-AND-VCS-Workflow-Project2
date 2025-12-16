// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program tests a template-based NumberArray class for integers and doubles. 
// It demonstrates array construction, setting and accessing elements, 
// calculating min, max, and average values, handling out-of-bounds errors with exceptions, 
// and printing the array contents.

#include "NumberArray.h"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main() {
    srand(time(0));

    cout << "----- Test constructors -----" << endl;

    // Precondition: None
    // Postcondition: intArray and dblArray are created with default size 10
    NumberArray<int> intArray;
    NumberArray<double> dblArray;

    cout << "From default constructor: Integer array of size " << intArray.getSize() << endl;
    intArray.print();
    cout << "From default constructor: Double array of size " << dblArray.getSize() << endl;
    dblArray.print();

    // Precondition: size > 0
    // Postcondition: Arrays created with size 15
    NumberArray<int> intArray2(15);
    NumberArray<double> dblArray2(15);

    cout << "From constructor with parameters: Integer array of size " << intArray2.getSize() << endl;
    intArray2.print();
    cout << "From constructor with parameters: Double array of size " << dblArray2.getSize() << endl;
    dblArray2.print();

    cout << "----- Test mutator -----" << endl;

    // Random number generators
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distInt(1, 100);
    uniform_real_distribution<> distDbl(0.1, 100.0);

    // Precondition: array size > 0
    // Postcondition: All array elements set to random numbers
    for (int i = 0; i < intArray2.getSize(); i++)
        intArray2.setNumber(i, distInt(gen));

    for (int i = 0; i < dblArray2.getSize(); i++)
        dblArray2.setNumber(i, distDbl(gen));

    cout << "Integer array filled with numbers:" << endl;
    intArray2.print();
    cout << "Double array filled with numbers:" << endl;
    dblArray2.print();

    // Test out-of-bounds set
    cout << "Trying to set a number with an out of bounds index (20):" << endl;
    try { intArray2.setNumber(20, 50); }
    catch (out_of_range&) {
        cout << "Integer array ...\nThe index is out of the bounds of the array, number not stored" << endl;
    }

    try { dblArray2.setNumber(20, 50.5); }
    catch (out_of_range&) {
        cout << "Double array ...\nThe index is out of the bounds of the array, number not stored" << endl;
    }

    cout << "----- Test accessors -----" << endl;
    // Precondition: index in bounds
    // Postcondition: prints element at index 5
    try {
        cout << "Access integer item at index 5: " << intArray2.getNumber(5) << endl;
        cout << "Access double item at index 5: " << dblArray2.getNumber(5) << endl;
    }
    catch (out_of_range&) { cout << "Index error" << endl; }

    // Test out-of-bounds get
    try { intArray2.getNumber(20); }
    catch (out_of_range&) {
        cout << "Integer array ...\nThe index is out of the bounds of the array, number not stored" << endl;
    }

    try { dblArray2.getNumber(20); }
    catch (out_of_range&) {
        cout << "Double array ...\nThe index is out of the bounds of the array, number not stored" << endl;
    }

    // Precondition: array not empty
    // Postcondition: prints min, max, and average
    cout << "The minimum value in the integer array is: " << intArray2.getLowest() << endl;
    cout << "The maximum value in the integer array is: " << intArray2.getHighest() << endl;
    cout << "The average of the values in the integer array is: "
        << fixed << setprecision(1) << intArray2.getAverage() << endl;

    cout << "The minimum value in the double array is: " << dblArray2.getLowest() << endl;
    cout << "The maximum value in the double array is: " << dblArray2.getHighest() << endl;
    cout << "The average of the values in the double array is: "
        << fixed << setprecision(1) << dblArray2.getAverage() << endl;

    cout << "----- Print arrays -----" << endl;
    cout << "Integer array:" << endl; intArray2.print();
    cout << "Double array:" << endl; dblArray2.print();

    cout << "----- Test destructor -----" << endl;
    cout << "Exiting program, destructor will be called to free memory." << endl;

    return 0;
}

