#pragma once
#include <string>


class FBullCowGame {
public:
	FBullCowGame(); // constructor
	void Reset(); // TODO make a more rich return value.
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(std::string); // TODO make a more rich return value. 
	// provide a method for counting bulls & cows, and increasing try #

	// Please try and ignore this and focus on the interace above 
private:
	// see constructor for initialization
	int MyCurrentTry;
	int MyMaxTries;

};
