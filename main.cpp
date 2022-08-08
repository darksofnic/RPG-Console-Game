//
//  main.cpp
//  CocoVita TEAM
//  Created by Amelia, Harvey, Mariam
//  Copyright © 2019 April. All rights reserved.
//

// general conditions
#include <iostream>
#include <ctime> // for random code
#include <string>

// This is Amelia on Hero code
#include "Mage.hpp"
#include "Leader.hpp"
#include "Warrior.hpp"
#include "Item.hpp" // this is Amelia mock's test on items


//This is Mariam's classes
#include "Items.hpp"
#include "Ingestibles.hpp"
#include "Weapon.hpp"
#include "Spell.hpp"
#include "MagicTrick.hpp"

// This is Harvey on Enemy code
#include "Benign.h"
#include "Vicious.h"


using namespace std;

void attack(Enemy & , Hero &);
void attack (Hero &, Enemy &);
void getInfo (string &p);
void countNumofEnemies();
int randBetween(int min, int max);
Enemy* getEnemy();

// random code that will apply for everything
// hasWeapon, randomEnemy
//attacked = ?
int randBetween(int min, int max)
{
    return (rand() % (max - min + 1)) + min; // this is correct for Random function
}

Enemy* getEnemy()
{
    int enemyChoice = randBetween(1, 4);
    // every single time you kill an enemy, it will only get stronger
    switch (enemyChoice)
    {
        case 1:
            return new Thief("thief",10,125,true,true); // first boolean is aggressive - second boolean: is  weapons
            
        case 2:
            return new Wild("wild animal",3,75,true); // first boolean is aggressive -  no second boolean since this is an animal
            
        case 3:
            return new Zombies("zombies",2,65,true,false);  // zombies dont have weapons
            
        case 4:
            return new Orcs("orcs",5,15,true,true); // first boolean is aggressive - second boolean: is  weapons
            
        default:
            return new Enemy();
    }
}

Items* getItems()
{
    int itemRandom = randBetween(1, 15);
    // every single time you kill an enemy, it will only get stronger
    switch (itemRandom)
    {
        case 1: return new Ingestibles ("water", "hydrates the player", 3);
        case 2: return new Ingestibles ("milk", "gives player calcium and protein", 4);
        case 3: return new Ingestibles ("meat", "gives player energy", 10);
        case 4: return new Ingestibles ("vegetables", "gives player energy", 8);
        case 5: return new Ingestibles ("sweets", "enhances player's energy", 5);
        case 6: return new Weapon ("gun", "allows to shoot the enemy", 15);
        case 7: return new Weapon ("bomb:", "kills the enemy", 100);
        case 8: return new Weapon ("sword", "causes physical damage to enemy", 10);
        case 9: return new Weapon ("axe", "smashes heads, splits open", 10);
        case 10: return new Spell ("Blinden", "Makes enemy blind", 10);
        case 11: return new Spell ("Paralyzer", "Makes enemy paralyzed", 15);
        case 12: return new Spell ("Self-destructor", "Makes enemy destruct himself", 100);
        case 13: return new Spell ("Poison", "Poisons the enemy", 10);
        case 14: return new MagicTrick ("Smoke effect", "makes smokey environment", NULL);
        case 15: return new MagicTrick ("Misdirect the enemy", "sends enemy to wrong direction", NULL);

        default:
            return new Items();
    }
}

//argument passed by reference &
void getInfo (string &p)
{
    cout << " Please put in your character name: ";
    cin.ignore();
    getline(cin,p);
}

void countNumofEnemies()
{
    cout << "Enemies show on map";
    cout
    << "\n     Thief Enemies: "<< Thief::getNumOfThief()
    << "\n     Wild Animal Enemies: "<< Wild::getNumOfWild()
    << "\n     Zombies Created: "<< Zombies::getNumOfZombies()
    << "\n     Orcs Created: "<< Orcs::getNumOfOrcs()
    << endl;
}

int main(int argc, const char * argv[])
{
    
    srand(time(0)); // for Random code
    Items* items = getItems();
    
    cout << "\n   You have surprise gifts !! " << endl;
    cout << "The gift is " << items->getName() << ". \n";
    cout << "The desciption is "<<items->getDescription()<< ". \n";
    cout << "The strength is " <<items->getStrength()<< ". \n";

    //int getStrength = items->getStrength();
    //cout << getStrength<<endl;

    
    /*
    //Ingestebles food and drink
    Ingestibles water ("water", "hydrates the player", 3);
    Ingestibles milk ("milk", "gives player calcium and protein", 4);
    Ingestibles meat ("meat", "gives player energy", 10);
    Ingestibles vegetables ("vegetables", "gives player energy", 8);
    Ingestibles sweets ("sweets", "enhances player's energy", 5);
    Ingestibles healingHerb ("Healing Herb", "improves player's health", 10);
    
    //List of Weapons for hero and enemy
    Weapon gun ("gun", "allows to shoot the enemy", 15);
    Weapon bomb ("bomb:", "kills the enemy", 100);
    Weapon sword ("sward", "causes physical damage to enemy", 10);
    Weapon axe ("axe", "smashes heads, splits open", 10);
    
    //Spells
    Spell makeBlind("Blinden", "Makes enemy blind", 10);
    Spell makeParalyzed("Paralyzer", "Makes enemy paralyzed", 15);
    Spell selfDestruct ("Self-destructor", "Makes enemy destruct himself", 100);
    Spell poison("Poison", "Poisons the enemy", 10);
    
    //Magic Tricks
    MagicTrick smoke("Smoke effect", "makes smokey environment");
    MagicTrick misdirection ("Misdirect the enemy", "sends enemy to wrong direction");
    int input;

    Items *arrayOfItems=nullptr;
    arrayOfItems= new Items[20];
    //from posisitons 0-5 Ingestibles have been stored
    arrayOfItems[0]= water;
    arrayOfItems[1]= milk;
    arrayOfItems[2] = meat;
    arrayOfItems[3] = vegetables;
    arrayOfItems[4] = sweets;
    arrayOfItems[5] = healingHerb;
    
    //from positions 6-9 Weapons
    arrayOfItems[6] =gun;
    arrayOfItems[7] = bomb;
    arrayOfItems[8] = sword;
    arrayOfItems[9] = axe;
    
    //from positions 10-13 spells
    arrayOfItems[10]=makeBlind;
    arrayOfItems[11] = makeParalyzed;
    arrayOfItems [12] =selfDestruct;
    arrayOfItems [13] = poison;
    
    arrayOfItems[14] = smoke;
    arrayOfItems[15] = misdirection;
 
    //to generate ingestibles
    int ingestibles = randBetween(0, 5);
    
    cout << arrayOfItems[ingestibles].toString() << endl;
    cout << arrayOfItems[ingestibles]->getStrength();
 */
    int input;
    string nameHero;
   
    cout << "Choose your hero: " << endl;
    cout << "1.Mage \n" << "2.Leader \n" << "3.Warrior \n" << endl;
    cout << "Put in a number of the role you want take: ";
    cin >> input; // this has put
    getInfo(nameHero);
    
// new leaner code - improved version of case 1
    
    // This is the pointer to the character
    Hero* character;
    
    switch (input)
    {
        case 1:
            character = new Mage(nameHero);
            break;
            
        case 2:
            character = new Leader(nameHero);
            break;
            
        case 3:
            character = new Warrior(nameHero);
            break;
            
        default:
            // Throw error here to inform user and to stop the program
            // can use catch for this as well but you will need catch with exception
            throw "Invalid input";
    }
    
    cout << "\n" ;
    cout << character->toString() << endl;
    character->biography();

    // There will be a story in between this before the character encounter with the enemy
    

    // This is the beginning of Enemy class
    // Randomly generate enemy
    Enemy* enemy = getEnemy();
    cout << "\n   You found enemies !! " << endl;
    countNumofEnemies();
    cout << "He is " << enemy->getName() << ". \n";
    cout << "His level is "<<enemy->getLevel() << ". \n";

    system("pause");

    cout
    << "\n Your have 2 options:\n"
    << "1. Fight in combat\n"
    << "2. Run like a chicken!\n";
    cout  << "Please enter your choice: ";
    cin >> input;
    
    switch (input)
    {
        case 1: //Lets Fight!!!
            cout << nameHero <<" is attacking the enemy with a power of "
            <<character->getPower() << endl;
            cout << "\n Description" << endl;
            character->attack();

            // Print out the status
            cout << "   Said the " << enemy->getName() << ": " ;
            enemy->makeNoise();
            cout << "\nEnemy health is " <<enemy->getHealth() << ". \n";

            break;
        case 2: // Run for your life
            break;
    }
    
    getchar();
    system("pause");
    return 0;
    
    
}

void attack(Hero &,Enemy &)
{
    
}

void attack(Enemy & , Hero &)
{
    
}
