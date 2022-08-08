//
//  Items.hpp
//  RPG
//
//  Created by Mariam Gogia on 4/7/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#ifndef Items_hpp
#define Items_hpp
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Items
{
    private:
        string name;
        string description;
        int strength;
    
        bool isAcquired;
        bool isUsed;
    
    public:
        static int numOfItems;
        Items();
        Items(string name, string description, int strength);

        void setName(string name);
        void setDescription (string description);
        void setStrength(int itemStrength);
        static int getNumOfItems () {return numOfItems;}

        bool Aquired();
        bool Used();
    
        void setAquired();
        void setUsed();
    

        int getStrength() {return strength;}
        string getName() {return  name;}
        string getDescription() {return description;}
        string toString();
    
        ~Items();
};
#endif /* Items_hpp */
