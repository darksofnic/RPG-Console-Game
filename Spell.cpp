//
//  Spell.cpp
//  RPG
//
//  Created by Mariam Gogia on 4/9/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#include "Spell.hpp"

Spell::Spell(){
    
}

Spell::Spell(string name, string description, int strength) {
    setName(name);
    setDescription(description);
    setStrength(strength);
}

//void Spell::setDamage(int damage) {
   // damage = damage;
//}

