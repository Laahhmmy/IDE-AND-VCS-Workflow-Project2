// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct student {
	string name;
	int id;
	double scores;
	double average;
	char lettergrade;
};
student* getData(ifstream& file, int& studentCnt, int& testsCnt);
void calcAverage(student students[], int studentCnt, int testsCnt);
void printReport(const student students[], int studentCnt);
char getLetterGrade(double avg);

int main() {
	
}


