//
//  Leader.cpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#include "Leader.hpp"
#include <iostream>
using namespace std;

Leader::Leader(string name) : Hero(name)
{
    
}

string Leader::getHeroType()
{
    return "Leader";
}


void Leader::attack()
{
    cout << "You are attacking the enemy with a sceptre ";
}


void Leader::biography()
{
    cout << " He is tacticlly gifted and know how to mind control others. He can kill enemies by paralyzying them. ";
}

