//
//  MagicTrick.hpp
//  RPG
//
//  Created by Mariam Gogia on 4/9/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#ifndef MagicTrick_hpp
#define MagicTrick_hpp
#include "Items.hpp"
#include "Weapon.hpp"
#include <stdio.h>
using namespace std;
class MagicTrick : public Weapon {
 
public:
    MagicTrick();
    MagicTrick(string name, string description, int strength);
    
};


#endif /* MagicTrick_hpp */
