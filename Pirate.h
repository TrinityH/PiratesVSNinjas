#pragma once
#include <iostream>
#include "Character.h"

using namespace std;

class Pirate :
	public Character
{
	//Declare and initialize properties/constructor
public:
	string Name = "Pirate";
	string StuffToSay = "I am the best swashbuckler there ever was!";
	int Health = 100;

public:
	//Method which outputs message to console.
	void UseSword() {
		cout << "I am swooshing my sword!" << endl;
	}
public:
//TODO: Finish overridden attack method
	void Attack() {
		Health = Health - 25;
	}
};

