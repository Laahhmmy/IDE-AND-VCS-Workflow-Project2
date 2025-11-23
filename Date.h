#ifndef DATE_H // Header guard
#define DATE_H 
#include <string>
#include <iostream>
using namespace std;

class Date { // Date class definition
private:
	int day;
	int month;
	int year;
	bool isvalidDate(int d, int m, int y);
	void incrementDay(); // Helper function to increment date by one day
	void decrementDay(); // Helper function to decrement date by one day
public:
	// Constructor
	Date(int m = 1, int d = 1, int y = 1900); // Default date is January 1, 1900
	void setDate(int m, int d, int y); // Set date method
	int getDay() const { return day; } // Getters
	int getMonth() const { return month; } // Get month
	int getYear() const { return year; }
	bool isLeapYear() const; // Check if current year is leap year
	bool isLeapYear(int y) const; // Check if given year is leap year
	int lastDayOfMonth() const { // Get last day of current month
		return lastDayOfMonth(month, year); // Call overloaded method
	}
	int lastDayOfMonth(int m, int y) const; // Get last day of given month and year
	string printDate() const; // Print date in MM/DD/YYYY format
	string printDateLong() const; // Print date in Month Day, Year format
	string printOtherLong() const; // Print date in Day Month Year format
	Date& operator++(); // Prefix increment operator
	Date operator++(int); // Postfix increment operator
	Date& operator--(); // Prefix decrement operator
	Date operator--(int); // Postfix decrement operator
	int operator-(const Date& d) const; // Subtract two dates to get difference in days
	friend ostream& operator<<(ostream& os, const Date& dt); // Overload << operator for output
	friend istream& operator>>(istream& is, Date& dt); // Overload >> operator for input
};

#endif // DATE_H

