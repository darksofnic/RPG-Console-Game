//
//  Warrior.hpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#ifndef Warrior_hpp
#define Warrior_hpp

#include <stdio.h>

#include <iostream>
#include <string>
#include "Hero.hpp"
using namespace std;

class Warrior: public Hero
{
    
public:
    Warrior ( string name);
    virtual string getHeroType();
    void attack();
    void biography(); 


};

#endif /* Warrior_hpp */
