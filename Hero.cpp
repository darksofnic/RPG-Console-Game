//
//  Hero.cpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#include "Hero.hpp"
#include <iostream>
#include <string>
#include "Item.hpp"
using namespace std;

Hero::Hero(string heroName)
{
    name = heroName; // private become public // input of hero name
    healthPoint = 100; // fixed number
    power = 100;
}

Hero::Hero()
{}; // this one should be empty

 string Hero::getHeroType()
{
    return "Hero";
}

// This is over-writing method combining with polymorphism 
 string Hero::toString()
{
    string HeroInfo = "\n          " + getHeroType()+ " original condition:\n";
    HeroInfo += "Name of your "+ getHeroType() + ": " + getName() + "\n";
    HeroInfo += "Original health point is " + to_string(getHealthPoint());
    return HeroInfo;
}

 void Hero::attack()
{
    cout << "You are attacking the enemy with a sword. " << endl;
    

}

void Hero::biography()
{
    cout << " These are heroes that will help you to win the game." << endl ;
}
