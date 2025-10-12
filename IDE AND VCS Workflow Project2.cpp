// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int readData(ifstream& inFile, string names[], double scores[][NUM_TESTS]);
void calculateAverages(double scores[][NUM_TESTS], double averages[], int studentCount);
char getLetterGrade(double average);
void displayReport(const string names[], const double averages[], int studentCount);

int main() {
	
}

int readData(ifstream& inFile, string names[], double scores[][NUM_TESTS]) {
    int count = 0;

    while (count < MAX_STUDENTS && inFile >> names[count]) {
        for (int i = 0; i < NUM_TESTS; i++) {
            inFile >> scores[count][i];
        }
        count++;
    }
    return count;
}

void calculateAverage(double scores[][NUM_TESTS], double averages[], int studentCount) {
    for (int i = 0; i < studentCount; i++) {
        double sum = 0;
        for (int j = 0; j < NUM_TESTS; j++) {
            sum += scores[i][j];
        }
        averages[i] = sum / NUM_TESTS;
	}
}
char getLetterGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}
void displayReport(const string names[], const double averages[], int studentCount) {
    cout << left << setw(20) << "Name" << setw(10) << "Average" << "Grade" << endl;
    cout << string(40, '-') << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << left << setw(20) << names[i] 
             << setw(10) << fixed << setprecision(2) << averages[i] 
             << getLetterGrade(averages[i]) << endl;
    }
}