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
		num[i] = 0.0;
	}


}


NumberArray::~NumberArray() {
	cout << "The destructor is running " << endl;
	delete[] num;
}

void NumberArray::setNumber(int index, double value) {
	if (index < 0 || index >= size) {
		cout << "The index is out of the bounds of the array, number not stored." << endl;
		return;
	}
	num[index] = value;

}

int NumberArray::getSize() const {
	return size;
}
double NumberArray::getNumber(int index) const {
	if (index < 0 || index >= size) {
		cout << "The index is out of the bounds of the array, number not stored" << endl;
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
	cout << fixed << setprecision(1);
	for (int i = 0; i < size; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}