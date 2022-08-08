#include "Enemy.h"
#include <iostream>
int Enemy::numOfEnemies = 0;

Enemy::Enemy()
{
	name = "enemy";
	level = 1;
	health = 1;
	numOfEnemies++;
}

Enemy::Enemy(string name, int level,int health, bool agressive)
{
	setName(name);
	setLevel(level);
	setHealth(health);
	numOfEnemies++;
}

void Enemy::setName(string newName)
{
	name = newName;
}

void Enemy::setLevel(int newLevel)
{
	level = newLevel;
}

void Enemy::setHealth(int healt)
{
	if (healt < 0) healt = 10;
	health = healt;
}


void Enemy::makeNoise()
{
    cout << " Are you ready to be killed!" <<endl; 
}

Enemy::~Enemy() // to keep track of the enemy on the map
{
	numOfEnemies--;
}

