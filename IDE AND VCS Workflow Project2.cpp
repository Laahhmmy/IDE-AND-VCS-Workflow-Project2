// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* ReverseArray(int const arr[], int size);
void print(int const arr[], int size);
int main() {
	const int SIZE = 10;
	int numbers[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Original array: \n";
	print(numbers, SIZE);
	int* reversedNumbers = ReverseArray(numbers, SIZE);
	cout << "\nReversed array: \n";
	print(reversedNumbers, SIZE);
	delete[] reversedNumbers;
	return 0;
}
int* ReverseArray(int const arr[], int size) {
	int* reversedArr = new int[size];
	for (int i = 0; i < size; i++) {
		reversedArr[i] = arr[size - 1 - i];
	}
	return reversedArr;
}

void print(int const arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
