#include "TeamLeader.h"
#include <iostream>
using namespace std;

TeamLeader::TeamLeader(string n, int numb, string date,
    int shift, double rate,
    double bonus, int required, int attended)
    : ProductionWorker(n, numb, date, shift, rate)
{
    monthlyBonus = bonus;
    requiredTrainingHours = required;
    attendedTrainingHours = attended;
}

double TeamLeader::getMonthlyBonus() const {
    return monthlyBonus;
}

int TeamLeader::getRequiredTrainingHours() const {
    return requiredTrainingHours;
}

int TeamLeader::getAttendedTrainingHours() const {
    return attendedTrainingHours;
}

void TeamLeader::setMonthlyBonus(double b) {
    monthlyBonus = b;
}

void TeamLeader::setRequiredTrainingHours(int r) {
    requiredTrainingHours = r;
}

void TeamLeader::setAttendedTrainingHours(int a) {
    attendedTrainingHours = a;
}

void TeamLeader::printTeamLeader() const {
    printProductionWorker();
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}