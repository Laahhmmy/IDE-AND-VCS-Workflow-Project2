#ifndef DATE_H // Header guard
#define DATE_H 

// The date class represents a calendar date and provides methods for date manipulation and formatting.
// It includes functionality to check for leap years, increment and decrement dates, and calculate the difference between two dates.
// It also overloads input and output operators for easy reading and writing of date objects.

#include <string>
#include <iostream>
using namespace std;

class Date { // Date class definition
private:
	int day;
	int month;
	int year;
	bool isvalidDate(int d, int m, int y);
	// Preconditions: d, m, y represent a date
	// Postconditions: returns true if the date is valid, false otherwise
	void incrementDay(); // Helper function to increment date by one day
	// Preconditions: none
	// Postconditions: increments the date by one day
	void decrementDay(); // Helper function to decrement date by one day
	// Preconditions: none
	// Postconditions: decrements the date by one day
public:
	// Constructor
	Date(int m = 1, int d = 1, int y = 1900); // Default date is January 1, 1900
	// Preconditions: m, d, y represent a date
	// Postconditions: initializes the date object with the given date
	void setDate(int m, int d, int y); // Set date method
	// Preconditions: m, d, y represent a date
	// Postconditions: sets the date object to the given date if valid
	int getDay() const { return day; } // Getters
	// Preconditions: none
	// Postconditions: returns the day of the date object
	int getMonth() const { return month; } // Get month
	// Preconditions: none
	// Postconditions: returns the month of the date object
	int getYear() const { return year; }
	// Preconditions: none
	// Postconditions: returns the year of the date object
	bool isLeapYear() const; // Check if current year is leap year
	// Preconditions: none
	// Postconditions: returns true if the current year is a leap year, false otherwise
	bool isLeapYear(int y) const; // Check if given year is leap year
	// Preconditions: y is a year
	// Postconditions: returns true if the given year is a leap year, false otherwise
	int lastDayOfMonth() const { // Get last day of current month
		return lastDayOfMonth(month, year); // Call overloaded method
	}
	// Preconditions: none
	// Postconditions: returns the last day of the current month and year
	int lastDayOfMonth(int m, int y) const; // Get last day of given month and year
	// Preconditions: m is a month, y is a year
	// Postconditions: returns the last day of the given month and year
	string printDate() const; // Print date in MM/DD/YYYY format
	// Preconditions: none
	// Postconditions: returns a string representation of the date in MM/DD/YYYY format
	string printDateLong() const; // Print date in Month Day, Year format
	// Preconditions: none
	// Postconditions: returns a string representation of the date in Month Day, Year format
	string printOtherLong() const; // Print date in Day Month Year format
	// Preconditions: none
	// Postconditions: returns a string representation of the date in Day Month Year format
	Date& operator++(); // Prefix increment operator
	// Preconditions: none
	// Postconditions: increments the date by one day and returns the updated date object
	Date operator++(int); // Postfix increment operator
	// Preconditions: none
	// Postconditions: increments the date by one day and returns the original date object
	Date& operator--(); // Prefix decrement operator
	// Preconditions: none
	// Postconditions: decrements the date by one day and returns the updated date object
	Date operator--(int); // Postfix decrement operator
	// Preconditions: none
	// Postconditions: decrements the date by one day and returns the original date object
	int operator-(const Date& d) const; // Subtract two dates to get difference in days
	// Preconditions: d is another date object
	// Postconditions: returns the difference in days between the current date and the given date
	friend ostream& operator<<(ostream& os, const Date& dt); // Overload << operator for output
	// Preconditions: os is an output stream, dt is a date object
	// Postconditions: outputs the date object to the output stream in MM/DD/YYYY format
	friend istream& operator>>(istream& is, Date& dt); // Overload >> operator for input
	// Preconditions: is is an input stream, dt is a date object
	// Postconditions: inputs a date from the input stream and sets the date object accordingly
};

#endif // DATE_H

