#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"
class ShiftSupervisor : public Employee
{
private:
	double annualSalary;
	double productionBonus;
public:
    ShiftSupervisor(string n = "", string num = "", string date = "",
        double salary = 0.0, double bonus = 0.0);

    // Accessors
    double getAnnualSalary() const;
    double getProductionBonus() const;

    // Mutators
    void setAnnualSalary(double s);
    void setProductionBonus(double b);

    void printShiftSupervisor() const;

};
#endif
