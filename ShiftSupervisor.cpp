#include "ShiftSupervisor.h"
#include <iostream>
using namespace std;

ShiftSupervisor::ShiftSupervisor(string n, string numb, string date,
    double salary, double bonus)
    : Employee(n, numb, date), annualSalary(salary), productionBonus(bonus) {
}

double ShiftSupervisor::getAnnualSalary() const { return annualSalary; }
double ShiftSupervisor::getProductionBonus() const { return productionBonus; }

void ShiftSupervisor::setAnnualSalary(double s) { annualSalary = s; }
void ShiftSupervisor::setProductionBonus(double b) { productionBonus = b; }

void ShiftSupervisor::printShiftSupervisor() const {
    printEmployee();
    cout << "Annual Salary: $" << annualSalary << endl;
    cout << "Production Bonus: $" << productionBonus << endl;
}

