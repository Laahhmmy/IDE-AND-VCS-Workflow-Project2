#include "Date.h"
#include <iostream>
#include <sstream>
using namespace std;
static const string monthNames[] = {
	"January", "February", "March", "April", "May", "June",
	"July", "August", "September", "October", "November", "December"
};

bool Date::isvalidDate(int month, int day, int year) {
	if (month < 1 || month > 12) {
		cout << "Invalid month: " << month << endl;
	return false;
}
	int last = lastDayOfMonth(month, year);
	if (day < 1 || day > last) {
		cout << "Invalid day: " << day << " for month: " << month << " year: " << year << endl;
		return false;
	}
	return true;
}
Date::Date(int month, int day, int year) {
	setDate(month, day, year);
}
void Date::setDate(int month, int day, int year) {
	if (!isvalidDate(month, day, year)) {
		cout << "Setting date to default 1/1/1900" << endl;
		month = 1;
		day = 1;
		year = 1900;
	} else {
		month = month;
		day = day;
		year = year;
	}
}
bool Date::isLeapYear() const {
	return isLeapYear(year);
}
bool Date::isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date:: lastDayOfMonth(int month, int year) {
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
string Date::printDate() const {
	ostringstream oss;
	oss << month << "/" << day << "/" << year;
	return oss.str();
}
string Date::printDateLong() const {
	ostringstream oss;
	oss << monthNames[month - 1] << " " << day << ", " << year;
	return oss.str();
}
string Date::printOtherLong() const {
	ostringstream oss;
	oss << day << " " << monthNames[month - 1] << " " << year;
	return oss.str();
}

