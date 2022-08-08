#pragma once
#ifndef ENEMY_H
#define ENEMY_H
#include <string>
using namespace std;

class Enemy
{
	string name;
	int health;
	int level;
	bool agressive = false;
	static int numOfEnemies;

public:
	Enemy();
	Enemy(string name, int level, int health, bool agressive);
	void setName(string name);
	void setLevel(int newLevel);
	void setHealth(int health);

	static int getNumOfEnemy() { return numOfEnemies; }
	int getLevel() { return level; }
	int getHealth() { return health; }
	string getName() { return name; }
    
    virtual void makeNoise(); 
	~Enemy();


};

#endif // !ENEMY_H

