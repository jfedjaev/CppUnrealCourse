#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
void TellGuess(std::string Guess);
std::string GetGuess();
bool AskToPlayAgain();

int main() {
	bool bPlayAgain = false;
	PrintIntro();

	do {
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain == true);
	return 0;
}

void PlayGame() {
	FBullCowGame BCGame;	// instantiate a new game
	constexpr int NUMBER_OF_TURNS = 5;
	std::string Guess = "";
	Guess = GetGuess();
	TellGuess(Guess);
}

void TellGuess(std::string Guess) {
	std::cout << "Your guess was: " << Guess << ", wasn't it?" << std::endl;
	return;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH << "-letter isogram I'm thinking of?\n";
	return;
}

std::string GetGuess() {
	std::string Guess = "";
	std::cout << "Please enter your guess: ";
	std::getline(std::cin, Guess);
	std::cout << std::endl;
	return Guess;
}

bool AskToPlayAgain() {
	std::cout << "Do you want to play again? ";
	std::string ans = "";
	std::getline(std::cin, ans);
	std::cout << std::endl;
	return (ans[0] == 'Y' || ans[0] == 'y');
}

