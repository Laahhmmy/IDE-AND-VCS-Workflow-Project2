#include "NumberArray.h"
#include <iomanip>
#include <iostream>
using namespace std;
const double NumberArray::DEFAULT = 10000.0; // Defining the static constant member
NumberArray::NumberArray(int s) { // Constructor
	if (s <= 0) { // Check for invalid size
		cout << "Invalid size, using default size " << MAX_SIZE << endl;
		s = MAX_SIZE;
	}
	size = s;
	num = new double[size]; // Dynamically allocate array
	for (int i = 0; i < size; i++) {
		num[i] = 0.0;
	}


}


NumberArray::~NumberArray() { // Destructor
	cout << "The destructor is running " << endl;
	delete[] num;
}

void NumberArray::setNumber(int index, double value) { // Set number at index
	if (index < 0 || index >= size) { // Check for invalid index
		cout << "The index is out of the bounds of the array, number not stored." << endl;
		return;
	}
	num[index] = value;

}

int NumberArray::getSize() const { // Get size of the array
	return size;
}
double NumberArray::getNumber(int index) const { // Get number at index
	if (index < 0 || index >= size) { // Check for invalid index
		cout << "The index is out of the bounds of the array, number not stored" << endl;
		return DEFAULT;
	}
	return num[index];
}
double NumberArray::getLowest() const { // Get lowest number in the array
	double lowest = num[0];
	for (int i = 1; i < size; i++) { // Loop through the array
		if (num[i] < lowest) {
			lowest = num[i];
		}
	}
	return lowest;
}

double NumberArray::getHighest() const { // Get highest number in the array
	double highest = num[0];
	for (int i = 1; i < size; i++) { //	 Loop through the array
		if (num[i] > highest) {
			highest = num[i];
		}
	}
	return highest;
}

double NumberArray::getAverage() const { // Get average of the numbers in the array
	double sum = 0.0;
	for (int i = 0; i < size; i++) { // Loop through the array
		sum += num[i];
	}
	return sum / size;
}
void NumberArray::print() const {
	cout << fixed << setprecision(1); // Set precision to 1 decimal place
	for (int i = 0; i < size; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}