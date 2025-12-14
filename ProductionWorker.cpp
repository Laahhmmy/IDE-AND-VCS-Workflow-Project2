#include "ProductionWorker.h"
#include <iostream>
using namespace std;

ProductionWorker::ProductionWorker(string n, int numb, string date, int s, double rate)
    : Employee(n, numb, date)
{
    setShift(s);               // validation
    setHourlyPayRate(rate);    // validation
}

int ProductionWorker::getShift() const {
    return shift;
}

double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

void ProductionWorker::setShift(int s) {
    if (s != 1 && s != 2) {
        throw InvalidShift();
    }
    shift = s;
}

void ProductionWorker::setHourlyPayRate(double rate) {
    if (rate < 0) {
        throw InvalidPayRate();
    }
    hourlyPayRate = rate;
}

void ProductionWorker::printProductionWorker() const {
    printEmployee();
    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}
