#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
// This class represents a production worker, derived from Employee
class ProductionWorker : public Employee 
{
private:
	int shift; // 1 for day shift, 2 for night shift
	double hourlyPayRate; // hourly pay rate
public:
	ProductionWorker(string n = "", string num = "", string date = "", // default constructor
        int s = 1, double rate = 0.0);
	// accessor and mutator functions
    int getShift() const;
	// Precondition: shift is 1 or 2
	// Postcondition: returns the shift
    double getHourlyPayRate() const;
	// Postcondition: returns the hourly pay rate
	// Precondition: s is 1 or 2
    void setShift(int s);
	// Postcondition: sets the shift to s
	// Precondition: r is non-negative
    void setHourlyPayRate(double r);
	// Precondition: r is non-negative
	// Postcondition: sets the hourly pay rate to r
	// prints the production worker's data
    void printProductionWorker() const;
	// precondition: none
	// Postcondition: prints the production worker's data
	string toString() const;
	// precondition: none
	// Postcondition: returns a string representation of the object

};

#endif