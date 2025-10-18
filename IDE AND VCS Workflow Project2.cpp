// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* ReverseArray(int const arr[], int size);
void print(int const arr[], int size);
int main() {
	
}
int* ReverseArray(int const arr[], int size) {
	int* reversedArr = new int[size];
	for (int i = 0, i < size; i++) {
		reversedArr[i] = arr[size - 1 - i]
	}
	return reversedArr
}


