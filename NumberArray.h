#ifndef _NUMBERARRAY_H
#define _NUMBERARRAY_H
#include <iostream>
using namespace std;

class NumberArray
{
private:
	int size;
	double* num;
	static const int MAX_SIZE = 100;
	static const double DEFAULT;
public:
	NumberArray(int size = MAX_SIZE);
	NumberArray(const NumberArray& other);
	~NumberArray();
	void setNumber(int index, double value);
	double getNumber(int index) const;
	double getHighest() const;
	double getLowest() const;
	double getAverage() const;
	int getSize() const;
	void print() const;
};
#endif

