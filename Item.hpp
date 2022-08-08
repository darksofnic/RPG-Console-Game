//
//  Item.hpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/11/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Hero.hpp"
using namespace std;

class Item
{
    private:
        string name;
    public:
    // default constructor
    Item();
    // constructor
    Item ( string itemName );
    string getName()
    {
        return name;
    }
    
    //virtual void use (Hero &hero);
    
};
#endif /* Item_hpp */
