//
//  Ingestibles.hpp
//  RPG
//
//  Created by Mariam Gogia on 4/9/19.
//  Copyright © 2019 Mariam Gogia. All rights reserved.
//

#ifndef Ingestibles_hpp
#define Ingestibles_hpp
#include "Items.hpp"
#include <stdio.h>

using namespace std;
class Ingestibles : public Items
{
    private:
    
        int strength;
        /*string water;
        string milk;
        string meat;
        string vegetables;
        string sweets;
        string healingHerb;
        */
        //create this in main load in data stucture and pop randomply.
    
    public:
        Ingestibles();
        Ingestibles(string name, string description, int strength);

    
};


#endif /* Ingestibles_hpp */
