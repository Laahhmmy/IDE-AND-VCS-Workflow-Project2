#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
#include <iostream>
using namespace std;

class NumberArray
{
private:
	int size;
	double* num;
	static const int MAX_SIZE = 10;
	static const double DEFAULT;
public:
	NumberArray(int size = MAX_SIZE);
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

