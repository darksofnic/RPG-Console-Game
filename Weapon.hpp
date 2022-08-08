//
//  Weapon.hpp
//  RPG
//
//  Created by Mariam Gogia on 4/9/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#ifndef Weapon_hpp
#define Weapon_hpp
#include "Items.hpp"
#include <stdio.h>
using namespace std;
class Weapon : public Items {
private:
  //  int damage;


    
public:
    Weapon();
    Weapon(string name, string description, int strength);
    //void setDamage(int damage);
};

#endif /* Weapon_hpp */
