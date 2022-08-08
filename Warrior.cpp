//
//  Warrior.cpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#include "Warrior.hpp"
#include <iostream>
using namespace std;

Warrior::Warrior(string name) : Hero(name)
{
    
}

string Warrior::getHeroType()
{
    return "Warrior";
}


void Warrior::attack()
{
    cout << "You are attacking the enemy with an axe.  ";
}

void Warrior::biography()
{
    cout << " He is a man with a great strength, who can quickly kill Or with one shoot. ";
}
