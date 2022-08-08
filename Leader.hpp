//
//  Leader.hpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#ifndef Leader_hpp
#define Leader_hpp

#include <stdio.h>

#include <iostream>
#include <string>
#include "Hero.hpp"
using namespace std;

class Leader: public Hero
{
    
public:
    Leader ( string name);
    virtual string getHeroType();
    void attack();
    void biography();

};

#endif /* Leader_hpp */
