// IDE AND VCS Workflow Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// In this program, we will create a simple console-based Rock, Paper, Scissors game where a player can play against the computer.
#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;
string getplayerchoice(); // Function to get player's choice
string getComputerChoice(random_device& Random); // Function to get computer's random choice
string determineWinner(const string& player, const string& computer); // Function to determine the winner of a round
void updateScores(const string& winner, int& playerScore, int& computerScore); // Function to update scores based on the winner
void displayFinalResults(int playerScore, int computerScore); // Function to display final results

int main() {
	random_device Random; // Random number generator for computer's choice
	int playerScore = 0; // Player's score
	int computerScore = 0; // Computer's score
	cout << "Welcome to Rock, Paper, Scissors!" << endl; // Welcome message
	while (true) { // Main game loop
		string playerChoice = getplayerchoice(); //	 Get player's choice
		string computerChoice = getComputerChoice(Random); // Get computer's choice
		cout << "Computer chose: " << computerChoice << endl; // Display computer's choice
		string winner = determineWinner(playerChoice, computerChoice); // Determine the winner
		if (winner == "draw") cout << "It's a draw!" << endl; // Draw message
		else if (winner == "player") cout << "You win this round!" << endl; // Player win message
		else cout << "Computer wins this round!" << endl; // Computer win message
		updateScores(winner, playerScore, computerScore); // Update scores
		cout << "Current Scores - Player: " << playerScore << " Computer: " << computerScore << endl; // Display current scores
		cout << "Do you want to play again? (yes/no): " << endl; // Prompt to play again
		string playAgain; // Get player's response
		cin >> playAgain; // Input response
		if (playAgain != "yes") break; // Exit loop if not playing again

	}
	displayFinalResults(playerScore, computerScore); // Display final results
	return 0; // End of program
}
string getplayerchoice() {
	string choice;
	while (true) {
		cout << "Enter your choice (rock, paper, scissors): "; // Prompt for player's choice
		cin >> choice; // Input player's choice
		if (choice == "rock" || choice == "paper" || choice == "scissors") { // Validate choice
			return choice;
		}
		else {
			cout << "Invalid choice. Please try again." << endl; // Error message for invalid choice
		}
	}
}
string getComputerChoice(random_device& random) {
	uniform_int_distribution<int> randomInt(1, 3); // Random integer between 1 and 3
	int randomNumber = randomInt(random); // Generate random number
	if (randomNumber == 1) return "rock"; // Return rock for 1
	if (randomNumber == 2) return "paper"; // Return paper for 2
	else return "scissors"; // Return scissors for 3

}

string determineWinner(const string& player, const string& computer) {
	if (player == computer) // Check for draw
		return "draw"; // Return draw if choices are the same
	else if ((player == "rock" && computer == "scissors") || 
		(player == "scissors" && computer == "paper") ||
		(player == "paper" && computer == "rock")) // Check for player win conditions
		return "player"; // Return player if player wins
	else return "computer"; // Return computer if computer wins
}
void updateScores(const string& winner, int& playerScore, int& computerScore) {
	if (winner == "player") playerScore++; // Increment player score if player wins
	else if (winner == "computer") computerScore++; // Increment computer score if computer wins
}
void displayFinalResults(int playerScore, int computerScore) {
	cout << "Final Scores" << endl;
	cout << "Player: " << playerScore << endl << "Computer: " << computerScore << endl; // Display final scores
	if (playerScore > computerScore) cout << "You win the game!" << endl; // Player win message
	else if (computerScore > playerScore) cout << "Computer wins the game!" << endl; // Computer win message
	else cout << "The game is a draw!" << endl; // Draw message
}
