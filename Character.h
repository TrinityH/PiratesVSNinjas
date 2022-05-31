#pragma once

#include <iostream>
#include "GameStructure.h"
#include <string>

using namespace std;

class Character :
	public GameStructure
{
//Declare public and private properties
public:
	string Name;

public:
	//Talk method which takes one parameter
	void Talk(string stuffToSay) {
		cout << stuffToSay << endl;
	}

public:
	//Overridden Talk method which takes two parameters
	 void Talk(string name, string stuffToSay) {
		 cout << "I am a " << name << ". " << stuffToSay << endl;
	}
private:
	int Health;

public:
	// Setter Method
	void setHealth(int h) {
		// If health is less than or equal to zero, output expiration message to console, else update health.
		if (h <= 0) {
			Health = 0;
			cout << "Character has Expired..." << endl;
		}
		else {
			Health = h;
		}
		
	}
	//Getter Method
	int getHealth() {
		return Health;
	}
//TODO: Fix attack method
/*
public:
	virtual void Attack() {
		newHealth = Health - 10;
		setHealth(newHealth);
		getHealth();
	}
*/
};

