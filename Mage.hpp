//
//  Mage.hpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#ifndef Mage_hpp
#define Mage_hpp

#include <stdio.h>

#include <iostream>
#include <string>
#include "Hero.hpp"
using namespace std;

class Mage: public Hero
{
    
    public:
    Mage ( string name);
    
     void attack();
     void biography ();
     string getHeroType();
    
};
#endif /* Mage_hpp */
