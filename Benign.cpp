#include "Benign.h"
#include <iostream>

int Benign::numOfBenign = 0;

// By Applying : Benign Conctructor, you dont need 
// Any more the default constructore.

Benign::Benign(string name, int lvl, int health, bool aggresive, bool attacked) : Enemy(name, lvl, health, false)
{
	numOfBenign++;
	
}

void Benign::setBName(string newName)
{
	setName(newName);
}

void Benign::setBLevel(int newLv)
{
	setLevel(newLv);
}

void Benign::setBHealth(int health)
{
	setHealth(health);

}

void Benign::makeNoise()
{
    cout << " Benign Enemy " ;
}

Benign::~Benign()
{
	numOfBenign--;
}

// Generated the lv of the monster respect where the monster was found.
// Passive monter, has highly instinct to detect if they can match their enemy
int Thief::numOfThief = 0;
Thief::Thief(string tName, int tLv, int health, bool hasWeapon, bool attacked): Benign (tName, tLv, health, false, false)
{
    
	numOfThief++;
	
}

void Thief::makeNoise()
{
	cout << "Give me everything you have, and i will not kill you.! \n";
}

int Wild::numOfWild = 0;
Wild::Wild(string wName, int wLv, int health, bool attacked):Benign(wName, wLv, health, false, false)
{
	numOfWild++;
}

void Wild::makeNoise()
{
	cout << "Grrrrrr, ready to have your heart stabbed by my horn!!! \n";
}
