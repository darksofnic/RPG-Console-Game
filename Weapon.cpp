//
//  Weapon.cpp
//  RPG
//
//  Created by Mariam Gogia on 4/9/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#include "Weapon.hpp"

Weapon::Weapon (string name, string description, int strength) {
    setName(name);
    setDescription(description);
    setStrength(strength);
    
}

Weapon::Weapon(){

}

//void Weapon::setDamage(int damage) {
    //damage = damage;
//}
