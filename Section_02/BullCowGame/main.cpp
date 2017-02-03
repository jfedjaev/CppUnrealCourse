#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
void TellGuess(std::string Guess);
std::string GetGuess(int TryNb);
bool AskToPlayAgain();

FBullCowGame BCGame;	// instantiate a new game

int main() {
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		// TODO add a game summary
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain == true);
	return 0;
}

void PlayGame() {
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses 
	// TODO change from FOR to WHILE loop once we have 
	for (int i = 0; i < MaxTries; i++) {
		std::string Guess = "";		// TODO make loop checking valid guesses

		// submit valid guess to the game
		// print number of bulls and cows
		Guess = GetGuess(BCGame.GetCurrentTry());
		std::cout << "Your guess was: " << Guess << ", wasn't it?" << std::endl;
		std::cout << std::endl;
	}

	// TODO summarize game
}

void TellGuess(std::string Guess) {
	return;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH << "-letter isogram I'm thinking of?\n";
	return;
}

std::string GetGuess(int TryNb) {
	std::string Guess = "";
	std::cout << "Try No. " << TryNb <<". Please enter your guess: ";
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

