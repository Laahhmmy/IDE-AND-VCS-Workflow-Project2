#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>
using namespace std;
class BasicShape
{
private:
	double area;
	string name;
public:
	BasicShape() : area(0), name("") {}
	virtual ~BasicShape() {}
	double getArea() const { return area; }
	string getName() const { return name; }
	void setArea(double a) { area = a; }
	void setName(const string& n) { name = n; }
	virtual void calcArea() = 0; // Pure virtual function
};
#endif
