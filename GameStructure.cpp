#include <iostream>
#include "GameStructure.h"
#include <cstdlib>
#include <ctime>

using namespace std;
//Welcome method which outputs introduction message to console.
void welcome()
{
	cout << "Welcome to Pirates Vs. Ninjas!" << endl;
	cout << "In this game of the classic feud, you may choose a character and battle for glory." << endl << endl;
}

int RandomRoll()
{
	// Seed random number generator
	srand(static_cast<unsigned int>(time(0)));

	// Generate random number
	int randomNum = rand();

	// Get a number between 1 and 101
	int d20 = (randomNum % 101) + 1;

	cout << "You rolled a " << d20 << endl << endl;


	return d20;

}

