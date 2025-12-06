#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	string employeeNumber;
	string hireDate;

public:
    Employee(string n = "", string num = "", string date = "");

    // Accessors
    string getName() const;
    string getEmployeeNumber() const;
    string getHireDate() const;

    // Mutators
    void setName(string n);
    void setEmployeeNumber(string num);
    void setHireDate(string date);

    void printEmployee() const;

};

