#include "NumberArray.h"
#include <iomanip>
#include <iostream>
using namespace std;
const double NumberArray::DEFAULT = 10000.0;
NumberArray::NumberArray(int s) {
	if (s <= 0) {
		cout << "Invalid size, using default size " << MAX_SIZE << endl;
		s = MAX_SIZE;
	}
	size = s;
	num = new double[size];
	for (int i = 0; i < size; i++) {
		num[i] = DEFAULT;
	}


}
NumberArray::NumberArray (const NumberArray& other) {
	size = other.size;
	num = new double[size];
	for (int i = 0; i < size; i++) {
		num[i] = other.num[i];
	}
}

NumberArray::~NumberArray() {
	cout << "The destructor is running " << endl;
	delete[] num;
}

void NumberArray::setNumber(int index, double value) {
	if (index < 0 || index >= size) {
		cout << "Index out of bounds. Valid range is 0 to " << size - 1 << endl;
		return;
	}
	num[index] = value;
}
double NumberArray::getNumber(int index) const {
	if (index < 0 || index >= size) {
		cout << "Index out of bounds. Valid range is 0 to " << size - 1 << endl;
		return DEFAULT;
	}
	return num[index];
}
double NumberArray::getLowest() const {
	double lowest = num[0];
	for (int i = 1; i < size; i++) {
		if (num[i] < lowest) {
			lowest = num[i];
		}
	}
	return lowest;
}

double NumberArray::getHighest() const {
	double highest = num[0];
	for (int i = 1; i < size; i++) {
		if (num[i] > highest) {
			highest = num[i];
		}
	}
	return highest;
}

double NumberArray::getAverage() const {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += num[i];
	}
	return sum / size;
}
void NumberArray::print() const {
	cout << fixed << setprecision(2);
	for (int i = 0; i < size; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}