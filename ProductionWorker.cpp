#include "ProductionWorker.h"
#include <iostream>
using namespace std;

ProductionWorker::ProductionWorker(string n, string numb, string date, int s, double rate)
	: Employee(n, numb, date), shift(s), hourlyPayRate(rate) {
}

int ProductionWorker::getShift() const {
	return shift;
}
double ProductionWorker::getHourlyPayRate() const {
	return hourlyPayRate;
}
void ProductionWorker::setShift(int s) {
	shift = s;
}
void ProductionWorker::setHourlyPayRate(double rate) {
	hourlyPayRate = rate;
}

void ProductionWorker::printProductionWorker() const {
	printEmployee();
	cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
	cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}
