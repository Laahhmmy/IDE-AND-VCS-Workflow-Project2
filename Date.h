#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
	bool isvalidDate(int d, int m, int y);
public:
	// Constructor
	Date(int m = 1, int d = 1, int y = 1900);
	void setDate(int m, int d, int y);
	int getDay() const { return day; }
	int getMonth() const { return month; }
	int getYear() const { return year; }
	bool isLeapYear() const;
	bool isLeapYear(int y) const;
	int lastDayOfMonth() const {
		return lastDayOfMonth(month, year);
	}
	int lastDayOfMonth(int m, int y) const;
	string printDate() const;
	string printDateLong() const;
	string printOtherLong() const;
};
#endif // DATE_H
