//
//  Spell.hpp
//  RPG
//
//  Created by Mariam Gogia on 4/9/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#ifndef Spell_hpp
#define Spell_hpp
#include "Items.hpp"
#include "Weapon.hpp"
#include <stdio.h>
using namespace std;
class Spell : public Weapon {
public:
    Spell();
    Spell(string name, string description, int strength);
    
   // void setDamage(int damage);

};

#endif /* Spell_hpp */
