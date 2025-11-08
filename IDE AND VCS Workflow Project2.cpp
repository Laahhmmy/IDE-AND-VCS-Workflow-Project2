// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumberArray.h"
#include <iomanip>
#include <iostream>
#include <random>
using namespace std;

int main() {
    cout << "----- Test Constructors -----" << endl;
    NumberArray array1;
    cout << "From Default constructor: Array of size " << array1.getSize() << endl;
    array1.print();
    NumberArray array2(15);
    cout << "From constructor with parameters: Array of size " << array2.getSize() << endl;
    array2.print();

    cout << "----- Test mutator -----" << endl;

    // Fill array with random floating-point numbers
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(1.0, 100.0);

    for (int i = 0; i < array2.getSize(); i++) {
        array2.setNumber(i, dist(gen));
    }

    cout << "Array filled with numbers:" << endl;
    array2.print();

    cout << "Trying to set a number with an out of bounds index (20):" << endl;
    array2.setNumber(20, 50.0);

    cout << "----- Test accessors -----" << endl;
    cout << "Access item at index 5: " << array2.getNumber(5) << endl;
    cout << "Access item at index 20 (out of bounds): " << array2.getNumber(20) << endl;

    cout << "The minimum value in the array is: " << array2.getLowest() << endl;
    cout << "The maximum value in the array is: " << array2.getHighest() << endl;
    cout << "The average of the values in the array is: "
        << fixed << setprecision(1) << array2.getAverage() << endl;

    return 0;
}

