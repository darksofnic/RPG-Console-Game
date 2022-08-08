//
//  Mage.cpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#include "Mage.hpp"
#include <iostream>
using namespace std;

Mage::Mage(string name) : Hero(name)
{
    
}

// Mage over-rides the HeroType
string Mage::getHeroType()
{
    return "Mage";
}

void Mage::attack()
{
    cout << "You are attacking the enemy with a spell. ";
}

void Mage::biography()
{
    cout
    << "\nMage is a wise beyond measure man. He has the ability to control the elements. \n"
    << "He can control the enemies with his magic spell. \n";
}
