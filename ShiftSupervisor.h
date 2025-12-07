#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"
// This class represents a shift supervisor, inheriting from Employee
class ShiftSupervisor : public Employee
{
private:
	double annualSalary; // Annual salary of the shift supervisor
	double productionBonus; // Production bonus for the shift supervisor
public:
	ShiftSupervisor(string n = "", string num = "", string date = "", // Constructor
        double salary = 0.0, double bonus = 0.0);
	// Precondition: None
	// Postcondition: Sets the annual salary and production bonus of the shift supervisor

    // Accessors
    double getAnnualSalary() const;
	// Precondition: None
	// Postcondition: Returns the annual salary of the shift supervisor
    double getProductionBonus() const;
	// Precondition: None
	// Postcondition: Returns the production bonus of the shift supervisor
    // Mutators
    void setAnnualSalary(double s);
	// Precondition: None
	// Postcondition: Sets the annual salary of the shift supervisor
    void setProductionBonus(double b);
	// Precondition: None
	// Postcondition: Sets the production bonus of the shift supervisor
    void printShiftSupervisor() const;
	// Precondition: None
	// Postcondition: Prints the details of the shift supervisor
};
#endif
