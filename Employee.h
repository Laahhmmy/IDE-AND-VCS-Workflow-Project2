#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

// This class represents an employee with basic details.
// It includes constructors, accessors, mutators, and a method to print employee details.


class Employee
{
private:
	string name; // Employee's name
	string employeeNumber; // Employee's number
	string hireDate; // Employee's hire date

public:
	Employee(string n = "", string num = "", string date = ""); // Constructor with default parameters
	// Preconditions: n, num, and date are strings representing the employee's name, number, and hire date respectively.
	// Postconditions: An Employee object is created with the provided details or default values if none are provided.

	// Accessors
	string getName() const;
	// Preconditions: None.
	// Postconditions: Returns the name of the employee.
	string getEmployeeNumber() const;
	// Preconditions: None.
	// Postconditions: Returns the employee number.
	string getHireDate() const;
	// Preconditions: None.
	// Postconditions: Returns the hire date of the employee.

	// Mutators
	void setName(string n);
	// Preconditions: n is a string representing the employee's name.
	// Postconditions: Sets the employee's name to n.
	void setEmployeeNumber(string num);
	// Preconditions: num is a string representing the employee's number.
	// Postconditions: Sets the employee's number to num.
	void setHireDate(string date);
	// Preconditions: date is a string representing the hire date.
	// Postconditions: Sets the hire date to date.
	void printEmployee() const;
	// Preconditions: None.
	// Postconditions: Prints the employee's details to the console.

};
#endif
