#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "ProductionWorker.h"
class TeamLeader : public ProductionWorker
{
private:
	double monthlyBonus;
	double requiredTrainingHours;
	double attendedTrainingHours;
public:
    TeamLeader(string n = "", string num = "", string date = "",
        int shift = 1, double rate = 0.0,
        double bonus = 0.0, int required = 0, int attended = 0);

    // Accessors
    double getMonthlyBonus() const;
    int getRequiredTrainingHours() const;
    int getAttendedTrainingHours() const;

    // Mutators
    void setMonthlyBonus(double b);
    void setRequiredTrainingHours(int r);
    void setAttendedTrainingHours(int a);

    void printTeamLeader() const;


};

#endif