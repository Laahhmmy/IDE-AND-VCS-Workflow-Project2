#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string n, int numb, string date)
{
    name = n;
    setEmployeeNumber(numb);   // Validation happens here
    hireDate = date;
}

string Employee::getName() const {
    return name;
}

int Employee::getEmployeeNumber() const {
    return employeeNumber;
}

string Employee::getHireDate() const {
    return hireDate;
}

void Employee::setName(string n) {
    name = n;
}

void Employee::setEmployeeNumber(int numb) {
    if (numb < 0 || numb > 9999) {
        throw InvalidEmployeeNumber();
    }
    employeeNumber = numb;
}

void Employee::setHireDate(string date) {
    hireDate = date;
}

void Employee::printEmployee() const {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}
