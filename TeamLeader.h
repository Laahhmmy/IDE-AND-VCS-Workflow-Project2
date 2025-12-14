#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"
// TeamLeader class derived from ProductionWorker
class TeamLeader : public ProductionWorker
{
private:
	double monthlyBonus; // monthly bonus amount
	double requiredTrainingHours; // required training hours
	double attendedTrainingHours; // attended training hours
public:
	TeamLeader(string n = "", string num = "", string date = "", // default constructor
        int shift = 1, double rate = 0.0,
        double bonus = 0.0, int required = 0, int attended = 0);
	// Precondition: None
	// Postcondition: A TeamLeader object is created with the specified values or default values.
    // Accessors
    double getMonthlyBonus() const;
	// Precondition: None
	// Postcondition: The monthly bonus amount is returned.
    int getRequiredTrainingHours() const;
	// Precondition: None
	// Postcondition: The required training hours are returned.
    int getAttendedTrainingHours() const;
	// Precondition: None
	// Postcondition: The attended training hours are returned.
    // Mutators
    void setMonthlyBonus(double b);
	// Precondition: b is a valid bonus amount.
	// Postcondition: The monthly bonus amount is set to b.
    void setRequiredTrainingHours(int r);
	// Precondition: r is a valid number of required training hours.
	// Postcondition: The required training hours are set to r.
    void setAttendedTrainingHours(int a);
	// Precondition: a is a valid number of attended training hours.
	// Postcondition: The attended training hours are set to a.
    void printTeamLeader() const;
	// Precondition: None
	// Postcondition: The TeamLeader's information is printed to the console.

};

#endif