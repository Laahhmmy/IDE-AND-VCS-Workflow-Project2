// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program reverses an array of integers using dynamic memory allocation.

#include <iostream>
using namespace std;
// Function ReverseArray creates a new array that is the reverse of the input array.
// It returns a pointer to the newly created reversed array.
// Parameters:
//   arr - the original array to be reversed
//  size - the number of elements in the array
// Returns:
//   A pointer to the newly created reversed array.
// Preconditions: The array must have at least 'size' elements.
// Postconditions: A new array is created in dynamic memory containing the elements of the original array in reverse order.
int* ReverseArray(int const arr[], int size);
// Function print displays the elements of the array.
// Parameters:
//   arr - the array to be printed
//  size - the number of elements in the array
// Preconditions: The array must have at least 'size' elements.
// Postconditions: The elements of the array are printed to the console.
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
