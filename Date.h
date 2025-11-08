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
	
#endif // DATE_H
