// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// In this program, it reads data from the file and calculates the average grade and then assigns the correct letter grade.
#include <iostream> 
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
const int NUM_TESTS = 5; // Constant Integer for number of tests
const int MAX_STUDENTS = 100; // Constant integer for maximum number off students
int readData(ifstream& inFile, string names[], double scores[][NUM_TESTS]); 
void calculateAverages(double scores[][NUM_TESTS], double averages[], int studentCount);
char getLetterGrade(double average);
void displayReport(const string names[], const double averages[], int studentCount);

int main() {
	ifstream inFile("StudentGrades.txt"); // Open and get file
    if (!inFile) { // Error if file failed to open
        cerr << "Error opening file." << endl;
        return 1;
    }
    string names[MAX_STUDENTS];
    double scores[MAX_STUDENTS][NUM_TESTS];
    double averages[MAX_STUDENTS];
    int studentCount = readData(inFile, names, scores);
    calculateAverages(scores, averages, studentCount);
    displayReport(names, averages, studentCount);
    inFile.close(); // Close File
	return 0;
}

int readData(ifstream& inFile, string names[], double scores[][NUM_TESTS]) {
    int count = 0;

    while (count < MAX_STUDENTS && inFile >> names[count]) { // Create a loop to read the data
        for (int i = 0; i < NUM_TESTS; i++) {
            inFile >> scores[count][i];
        }
        count++;
    }
    return count;
}

void calculateAverages(double scores[][NUM_TESTS], double averages[], int studentCount) {
    for (int i = 0; i < studentCount; i++) { // Create a loop to calculate the average
        double sum = 0;
        for (int j = 0; j < NUM_TESTS; j++) {
            sum += scores[i][j];
        }
        averages[i] = sum / NUM_TESTS;
	}
}
char getLetterGrade(double average) {
    if (average >= 90) return 'A'; // Get the letter grades
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}
void displayReport(const string names[], const double averages[], int studentCount) {
    cout << left << setw(20) << "Name" << setw(10) << "Average" << "Grade" << endl; // Display the results
    cout << string(40, '-') << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << left << setw(20) << names[i] 
             << setw(10) << fixed << setprecision(2) << averages[i] 
             << getLetterGrade(averages[i]) << endl;
    }
}