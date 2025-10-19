// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program reads student data from a file, determines their id number, 
// calculates their average scores, and letter grades,
// and prints a formatted report to the console.

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
// function getData reads student data from a file and returns an array of student structs
// It also sets the number of students and tests via reference parameters.
student* getData(ifstream& file, int& studentCount, int& testsCount);
// function calcAverage calculates the average score and letter grade for each student
// based on their test scores.
void calcAverage(student students[], int studentCount, int testsCount);
// function printReport prints a formatted report of student names,
// IDs, averages, and letter grades to the console.
// It takes a constant array of student structs and the number of students as parameters.
void printReport(const student students[], int studentCount);
// function getLetterGrade returns the letter grade corresponding to a given average score.
// It takes a double average as a parameter and returns a char letter grade.
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

student* getData(ifstream& file, int& studentCount, int& testsCount) {
	file >> studentCount >> testsCount;
	student* students = new student[studentCount];
	for (int i = 0; i < studentCount; i++) {
		file >> students[i].name >> students[i].id;
		students[i].scores = new double[testsCount];
		for (int j = 0; j < testsCount; j++) {
			file >> students[i].scores[j];
		}
	}
	return students;
}
void calcAverage(student students[], int studentCount, int testsCount) {
	for (int i = 0; i < studentCount; i++) {
		double total = 0;
		for (int j = 0; j < testsCount; j++) {
			total += students[i].scores[j];
		}

		students[i].average = total / testsCount;
		students[i].lettergrade = getLetterGrade(students[i].average);
	}
}
void printReport(const student students[], int studentCount) {
	cout << left << setw(15) << "Name" << setw(10) << "ID" << setw(10) << "Average" << setw(10) << "Grade" << endl;
	for (int i = 0; i < studentCount; i++) {
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