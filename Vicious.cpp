#include "Vicious.h"
#include <iostream>
using namespace std;

int Vicious::numOfVicious = 0;

Vicious::Vicious(string name, int lvl,int health, bool aggresive, bool attacked) : Enemy(name, lvl, health, true)
{
	// Comment being removed after project Completed
	setName(name);
	setLevel(lvl);

}

void Vicious::setVName(string newName)
{
	setName(newName);
}

void Vicious::setVLevel(int newLv)
{
	setLevel(newLv);
}

void Vicious::makeNoise()
{
    cout << " Attack me and you will regret";
}

int Zombies::numOfZombies = 0;
Zombies::Zombies(string zName, int zLv,int health, bool hasWeapon, bool attacked): Vicious (zName, zLv, health, true, true)
{
	numOfZombies++;
}

void Zombies::makeNoise()
{
    cout << " I will eat your brain out and tear of every shred of your body muscles. \n";
}

int Orcs::numOfOrcs = 0;
Orcs::Orcs(string oName, int oLv, int health, bool hasWeapon, bool attacked):Vicious (oName,oLv,health, true, true)
{
	numOfOrcs++;
}


void Orcs::makeNoise()
{
    cout << " I will tear your body into pieces. \n";
}
