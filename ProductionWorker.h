#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
class ProductionWorker : public Employee
{
private:
	int shift;
	double hourlyPayRate;
public:
    ProductionWorker(string n = "", string num = "", string date = "",
        int s = 1, double rate = 0.0);

    int getShift() const;
    double getHourlyPayRate() const;

    void setShift(int s);
    void setHourlyPayRate(double r);

    void printProductionWorker() const;

};

#endif