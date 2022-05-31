//Pre-processor directives
#include <iostream>
#include "GameStructure.h"
#include "Character.h"
#include "Ninja.h"
#include "Pirate.h"

//Namespace
using namespace std;

int main()
{
	// Declare and initalize exit variable
	char exit = 'N';

	// Create objects
	Character charObj;
	Ninja ninObj;
	Pirate pirObj;
	Ninja ninjaAtk;
	Pirate pirateAtk;

	//Set pointers and references for Overriding Attack
	Character* ptrAtk;
	Character* ptrAtk2;
	Ninja decNAtk;
	Pirate decPAtk;
	ptrAtk = &decNAtk;
	ptrAtk2 = &decPAtk;

	void* ptrHlth;
	int ninHlth = ninObj.Health;
	ptrHlth = &ninHlth;


	// Game introduction
	welcome();

	//Main Game Loop
	while (exit != 'Y')
	{
		//If random number is greater than 50, Pirate character goes first.
		if (RandomRoll() > 50) {

			cout << "Ninjas are sneaky, watch out!" << endl;
			cout << "Hold your sword steady, Pirate!" << endl << endl;

			
			charObj.Talk(pirObj.Name, pirObj.StuffToSay);
			charObj.setHealth(pirObj.Health);

			cout << "Do you wish to attack? 'Y' or 'N'" << endl;
			char attack;
			cin >> attack;

			if (attack == 'Y') {
				pirateAtk.UseSword();
				//ptrAtk->Attack();
				//charObj.Attack();
				charObj.setHealth(pirObj.Health);
				cout << charObj.getHealth() << endl;
			}
		}
		else {

			cout << "A rough voice yells out to you." << endl;
			cout << "'Arrgh, matey. Time for ye to walk the plank.'" << endl;
			cout << "Prepare to defend yourself, Ninja!" << endl;

			//Initialize player variable
			charObj.Talk(ninObj.Name, ninObj.StuffToSay);
			charObj.setHealth(ninObj.Health);


			cout << "You are a " << ninObj.Name << ". You have " << ptrHlth << " health." << endl;

			cout << "Do you wish to attack? 'Y' or 'N'" << endl;
			char attack;
			cin >> attack;

			if (attack == 'Y') {
				ninjaAtk.ThrowStars();
				//ptrAtk->Attack();
				//charObj.Attack();
				charObj.setHealth(ninObj.Health);
				cout << charObj.getHealth() << endl;

			}

		}
	
		cout << "Do you wish to quit? 'Y' or 'N'" << endl;
		cin >> exit;
	}



	return 0;
}