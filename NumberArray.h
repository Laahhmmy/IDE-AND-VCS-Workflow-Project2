#ifndef NUMBERARRAY_H // include guard
#define NUMBERARRAY_H
#include <iostream> 
using namespace std;

class NumberArray // class declaration
{
private: // private members
	int size;
	double* num;
	static const int MAX_SIZE = 10;
	static const double DEFAULT;
public: // public members
	NumberArray(int size = MAX_SIZE); // constructor with default size
	~NumberArray(); // destructor
	void setNumber(int index, double value); //	 set number at index
	double getNumber(int index) const; // get number at index
	double getHighest() const; // get highest number
	double getLowest() const; // get lowest number
	double getAverage() const; // get average of numbers
	int getSize() const; // get size of the array
	void print() const; // print the array
};
#endif

