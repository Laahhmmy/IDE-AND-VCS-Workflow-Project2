#include "Date.h"
#include <iostream>
#include <sstream>
using namespace std;
static const string monthNames[] = { // Array of month names
	"January", "February", "March", "April", "May", "June", 
	"July", "August", "September", "October", "November", "December"
};

bool Date::isvalidDate(int month, int day, int year) { // Validate date
	if (month < 1 || month > 12) { // Check month range
		cout << "Invalid month: " << month << endl;
	return false;
}
	int last = lastDayOfMonth(month, year); // Get last day of month
	if (day < 1 || day > last) { // Check day range
		cout << "Invalid day: " << day << " for month: " << month << " year: " << year << endl;
		return false;
	}
	return true;
}
Date::Date(int month, int day, int year) { // Constructor
	setDate(month, day, year);
}
void Date::setDate(int month, int day, int year) { // Set date with validation
	if (!isvalidDate(month, day, year)) {
		cout << "Setting date to default 1/1/1900" << endl;
		this->month = 1;
		this->day = 1;
		this->year = 1900;
	} else {
		this->month = month;
		this->day = day;
		this->year = year;
	}
}
bool Date::isLeapYear() const { // Check if current year is leap year
	return isLeapYear(year);
}
bool Date::isLeapYear(int year) const { // Check if given year is leap year
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::lastDayOfMonth(int month, int year) const { // Get last day of month
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		return isLeapYear(year) ? 29 : 28;
	default:
		return 0; // Invalid month
	}
}
string Date::printDate() const { // Print date in MM/DD/YYYY format
	ostringstream oss;
	oss << month << "/" << day << "/" << year;
	return oss.str();
}
string Date::printDateLong() const { // Print date in Month Day, Year format
	ostringstream oss;
	oss << monthNames[month - 1] << " " << day << ", " << year;
	return oss.str();
}
string Date::printOtherLong() const { // Print date in Day Month Year format
	ostringstream oss;
	oss << day << " " << monthNames[month - 1] << " " << year;
	return oss.str();
}

