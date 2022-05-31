#pragma once
#include <iostream>

#include "Character.h"

using namespace std;

class Ninja :
	public Character
{
//Declare and initialize variables
public:
	string Name = "Ninja";
	string StuffToSay = "I am here to fight and chew gum, and I am all out of gum!";
	int Health = 100;

public:
	// Method which outputs message to console.
	void ThrowStars() {
		cout << "I am throwing stars!" << endl;
	}
//TODO: Finish overridden attack method
public:
	void Attack() {
	}
};

