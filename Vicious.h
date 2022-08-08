#pragma once
#ifndef VICIOUS_H
#define VICIOUS_H
#include "Enemy.h"

class Vicious :public Enemy
{
	
private:
    static int numOfVicious;
    /*
     1. Subs classes
     -Orcs
     -Zombies
     (Possibility of adding more enemies.)
     2. Attack a sight
     */
//	int Enemy::numOfEnemies = 0;
	//bool attacked = false;
public:
	Vicious(string name, int lvl,int health, bool aggresive, bool attacked);
	void setVName(string newName);
	void setVLevel(int newLv);
    void makeNoise();
   
    string getVName(){return getName();}
	int getVHealth() {return getHealth();}
	int getVlevel()  { return getLevel();}
    static int getNumOfVicious() {return numOfVicious;}

	~Vicious()
    {
        numOfVicious--;
    };

};

class Orcs : public Vicious
{
    private:
        //  Vicious orcs;
        //	int Vicious::numOfVicious = 0;
        static int numOfOrcs;
    public:
        Orcs(string oName, int oLv,int health, bool hasWeapon, bool attacked);
        int getOHealth() {return getVHealth();}
        int getOLvl() { return getVlevel(); }
    
        void makeNoise();
        static int getNumOfOrcs() { return numOfOrcs; }
    
        ~Orcs()
        {
            numOfOrcs--;
        }

};

class Zombies : public Vicious
{
    private:
      // int Vicious::numOfVicious = 0;
        static int numOfZombies;
    public:
        Zombies(string zName, int zLv,int health, bool hasWeapon, bool attacked);
        int getZHealth() { return getVHealth(); }
        int getZLvl() { return getVlevel(); }
        void makeNoise();

    
        static int getNumOfZombies() { return numOfZombies; }
    
        ~Zombies()
        {
            numOfZombies--;
        }


};

#endif // !VICIOUS_H
