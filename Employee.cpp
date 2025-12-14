#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string n, string numb, string date)
	: name(n), employeeNumber(numb), hireDate(date) {
}

string Employee::getName() const {
	return name;
}
string Employee::getEmployeeNumber() const {
	return employeeNumber;
}
string Employee::getHireDate() const {
	return hireDate;
}

void Employee::setName(string n) {
	name = n;
}

void Employee::setEmployeeNumber(string numb) {
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