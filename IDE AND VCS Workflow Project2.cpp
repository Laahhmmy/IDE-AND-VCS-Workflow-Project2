// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <random>

std::string getplayerchoice();
std::string getComputerChoice(std::random_device& myEngine);
std::string determineWinner(const std::string& player, const std::string& computer);
void updateScores(const std::string& winner, int& playerScore, int& computerScore);
void displayFinalResults(int playerScore, int computerScore);
using namespace std;
int main() {

	
}
std::string getplayerchoice() {
	std::string choice;
	while (true) {
		std::cout << "Enter your choice (rock, paper, scissors): ";
		std::cin >> choice;
		if (choice == "rock" || choice == "paper" || choice == "scissors") {
			return choice;
		}
		else {
			std::cout << "Invalid choice. Please try again." << std::endl;
		}
	}
}
std::string getComputerChoice(std::random_device& random) {
	std::uniform_int_distribution<int> randomInt(1, 3);
	int randomNumber = randomInt(random);
	if (randomNumber == 1) return "rock";
	if (randomNumber == 2) return "paper";
	else return "scissors";

}

std::string determineWinner(const std::string& player, const std::string& computer) {
	if (player == computer)
		return "draw";
	else if ((player == "rock" && computer == "scissors") ||
		(player == "scissors" && computer == "paper") ||
		(player == "paper" && computer == "rock"))
		return "player";
	else return "computer"
}


