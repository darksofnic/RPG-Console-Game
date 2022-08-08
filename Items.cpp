//
//  Items.cpp
//  RPG
//
//  Created by Mariam Gogia on 4/7/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#include "Items.hpp"
#include <ostream>
#include <sstream>
using namespace std;
int Items::numOfItems = 0;

Items::Items(string name, string description, int strength)
{
    setName(name);
    setDescription(description);
    setStrength(strength);
    isAcquired = false;
    isUsed = false;

}

Items::Items()
{
    name = "";
    description ="";
 
}

void Items::setName(string itemName) {
    name = itemName;
}

void Items::setStrength(int itemStrength)
{
    strength = itemStrength;
}



void Items::setDescription(string ItemDescription) {
    description = ItemDescription;
}

string Items::toString(){
    stringstream ss;
    ss << "The item name is: " << name << " it's description: " << description << "The item's strength is: " << strength << endl;
    return ss.str();
}

void Items::setAquired() {
    isAcquired = true;
    numOfItems++;
    cout << "this happend" << endl;
}

void Items::setUsed() {
    isUsed = true;
    Items::~Items();
}


Items::~Items() {
    numOfItems--;
    cout << "Item has been used" <<endl;
}
