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
	double* scores;
	double average;
	char lettergrade;
};
student* getData(ifstream& file, int& studentCnt, int& testsCnt);
void calcAverage(student students[], int studentCnt, int testsCnt);
void printReport(const student students[], int studentCnt);
char getLetterGrade(double avg);

int main() {
	ifstream inputFile("StudentData.txt");
	if (!inputFile) {
		cerr << "Error opening file." << endl;
		return 1;
	}
	int studentCnt, testsCnt;
	student* students = getData(inputFile, studentCnt, testsCnt);
	calcAverage(students, studentCnt, testsCnt);
	printReport(students, studentCnt);
	for (int i = 0; i < studentCnt; i++) {
		delete[] students[i].scores;
	}
	delete[] students;
	return 0;
}

student* getData(ifstream& file, int& studentCnt, int& testsCnt) {
	file >> studentCnt >> testsCnt;
	student* students = new student[studentCnt];
	for (int i = 0; i < studentCnt; i++) {
		file >> students[i].name >> students[i].id;
		students[i].scores = new double[testsCnt];
		for (int j = 0; j < testsCnt; j++) {
			file >> students[i].scores[j];
		}
	}
	return students;
}
void calcAverage(student students[], int studentCnt, int testsCnt) {
	for (int i = 0; i < studentCnt; i++) {
		double total = 0;
		for (int j = 0; j < testsCnt; j++) {
			total += students[i].scores[j];
		}

		students[i].average = total / testsCnt;
		students[i].lettergrade = getLetterGrade(students[i].average);
	}
}
void printReport(const student students[], int studentCnt) {
	cout << left << setw(15) << "Name" << setw(10) << "ID" << setw(10) << "Average" << setw(10) << "Grade" << endl;
	for (int i = 0; i < studentCnt; i++) {
		cout << left << setw(15) << students[i].name << setw(10) << students[i].id
			<< setw(10) << fixed << setprecision(1) << students[i].average
			<< setw(10) << students[i].lettergrade << endl;
	}
}
char getLetterGrade(double avg) {
	if (avg >= 90) return 'A';
	else if (avg >= 80) return 'B';
	else if (avg >= 70) return 'C';
	else if (avg >= 60) return 'D';
	else return 'F';
}