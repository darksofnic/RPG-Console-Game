#pragma once
#ifndef BENING_H
#define BENIGN_H
#include "Enemy.h"

class Benign :public Enemy
{
    private:
        static int numOfBenign;

        /*
        1. Note Sub Classes Thief and Wild animals.
        2. Thief can steal you until you have certaint amount of agility.
        3. Wild animals only attacks you if you attack them.
        4. If the Thief is higher level than Hero, Thief will cause tremblor
        */
        //bool attacked = false;
    public:
        //Benign();
        Benign(string name, int lvl , int health, bool aggresive,bool attacked);
        void setBName(string newName);
        void setBLevel(int newLv);
        void setBHealth(int health);
        void makeNoise();
    
        string getBName(){return getName();}
        int getBlevel()  {return getLevel();}
        int getBHealth()  {return getHealth();}


        static int getNumOfBenign() {return numOfBenign;}

        ~Benign();

};


/*
*Additional information.
- Thief give you the option of being rob by force or by will
*If you select by force you will need to battle with the Thief(With a chance of being Defeat).
*IF you select by will, The Thief will collect An Amount of money (Randomly determined) Gold from your inventory.
-The is also a oportunity to run , is only applied if you agility if higher than the enemy.
*/
class Thief : public Benign
{
    private:
        static int numOfThief;
    public :
        Thief(string tName, int tLv,int health, bool hasWeapon, bool attacked);
        string getTName(){return getBName();}
        int getTHealth(){return getBHealth();}
        int getTLvl() { return getBlevel(); }
        static int getNumOfThief() { return numOfThief; }
        void  makeNoise();
};


//////////////////////////////////////////////////////////////////
/*Additional Information you need to know about Wild Animals.
- Wild Animal usually dont attack, if you dont attack them first.
 *But there is a slight chance that they attack you if they are hungry.
*/

class Wild : public  Benign
{
        private:
            static int numOfWild;
        public:
            Wild(string tName, int tLv, int health, bool attacked);
            int getWHealth() {return getBHealth();}
            int getWLvl() { return getBlevel(); }
            static int getNumOfWild() { return numOfWild; }
            void  makeNoise();
};

#endif // !BENIGN_H
