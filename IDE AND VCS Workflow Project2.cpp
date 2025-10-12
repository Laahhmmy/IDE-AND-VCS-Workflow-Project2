// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;
string getplayerchoice();
string getComputerChoice(random_device& Random);
string determineWinner(const string& player, const string& computer);
void updateScores(const string& winner, int& playerScore, int& computerScore);
void displayFinalResults(int playerScore, int computerScore);

int main() {
	random_device Random;
	int playerScore = 0;
	int computerScore = 0;
	cout << "Welcome to Rock, Paper, Scissors!" << endl;
	while (true) {
		string playerChoice = getplayerchoice();
		string computerChoice = getComputerChoice(Random);
		cout << "Computer chose: " << computerChoice << endl;
		string winner = determineWinner(playerChoice, computerChoice);
		if (winner == "draw") cout << "It's a draw!" << endl;
		else if (winner == "player") cout << "You win this round!" << endl;
		else cout << "Computer wins this round!" << endl;
		updateScores(winner, playerScore, computerScore);
		cout << "Current Scores - Player: " << playerScore << " Computer: " << computerScore << endl;
		cout << "Do you want to play again? (yes/no): " << endl;
		string playAgain;
		cin >> playAgain;
		if (playAgain != "yes") break;

	}
	displayFinalResults(playerScore, computerScore);
	return 0;
}
string getplayerchoice() {
	string choice;
	while (true) {
		cout << "Enter your choice (rock, paper, scissors): ";
		cin >> choice;
		if (choice == "rock" || choice == "paper" || choice == "scissors") {
			return choice;
		}
		else {
			cout << "Invalid choice. Please try again." << endl;
		}
	}
}
string getComputerChoice(random_device& random) {
	uniform_int_distribution<int> randomInt(1, 3);
	int randomNumber = randomInt(random);
	if (randomNumber == 1) return "rock";
	if (randomNumber == 2) return "paper";
	else return "scissors";

}

string determineWinner(const string& player, const string& computer) {
	if (player == computer)
		return "draw";
	else if ((player == "rock" && computer == "scissors") ||
		(player == "scissors" && computer == "paper") ||
		(player == "paper" && computer == "rock"))
		return "player";
	else return "computer";
}
void updateScores(const string& winner, int& playerScore, int& computerScore) {
		if (winner == "player") playerScore++;
		else if (winner == "computer") computerScore++;
}
void displayFinalResults(int playerScore, int computerScore) {
	cout << "Final Scores" << endl;
	cout << "Player: " << playerScore << endl << "Computer: " << computerScore << endl;
	if (playerScore > computerScore) cout << "You win the game!" << endl;
	else if (computerScore > playerScore) cout << "Computer wins the game!" << endl;
	else cout << "The game is a draw!" << endl;
}
