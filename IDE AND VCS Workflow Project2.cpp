// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "NumberArray.h" // Include the NumberArray class definition
#include <iomanip>
#include <iostream>
#include <random> // For generating random numbers
using namespace std;

int main() {
    cout << "----- Test Constructors -----" << endl;
	NumberArray array1; // Default constructor
    cout << "From Default constructor: Array of size " << array1.getSize() << endl;
	array1.print(); // Print the contents of the array
	NumberArray array2(15); // Constructor with parameters
    cout << "From constructor with parameters: Array of size " << array2.getSize() << endl;
	array2.print(); // Print the contents of the array

    cout << "----- Test mutator -----" << endl;

	random_device rd; // Obtain a random number from hardware
	mt19937 gen(rd()); // Seed the generator
	uniform_real_distribution<> dist(1.0, 100.0); // Define the range

    for (int i = 0; i < array2.getSize(); i++) {
		array2.setNumber(i, dist(gen)); // Set each element to a random number between 1.0 and 100.0
    }

    cout << "Array filled with numbers:" << endl;
	array2.print(); // Print the contents of the array

    cout << "Trying to set a number with an out of bounds index (20):" << endl;
	array2.setNumber(20, 50.0); // Attempt to set an out-of-bounds index

    cout << "----- Test accessors -----" << endl;
	cout << "Access item at index 5: " << array2.getNumber(5) << endl; // Access a valid index
	cout << "Access item at index 20 (out of bounds): " << array2.getNumber(20) << endl; // Access an out-of-bounds index

	cout << "The minimum value in the array is: " << array2.getLowest() << endl; // Get the minimum value in the array
	cout << "The maximum value in the array is: " << array2.getHighest() << endl; // Get the maximum value in the array
    cout << "The average of the values in the array is: "
		<< fixed << setprecision(1) << array2.getAverage() << endl; // Get the average value in the array

    return 0;
}

