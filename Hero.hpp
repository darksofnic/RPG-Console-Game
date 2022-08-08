//
//  Hero.hpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/7/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#ifndef Hero_hpp
#define Hero_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Item.hpp"
using namespace std;

class Hero
{
private:
    /*
     Hero should have
     Name
     Ocuppation
     Level
     Description
     Health
     Strenght
     
     */
    string name;
    double healthPoint; // if you run out of point, you die
    int power;
    
public:
    // default constructor
    Hero ();
    // constructor
    Hero (string name);
    
    
    void setHealthPoint ( double newHealthPoint)
    {
        healthPoint = newHealthPoint;
    }
    

    // accessor
    string getName()
        {return name;}
    double getHealthPoint ()
        {return healthPoint;}
    int getPower(){return power;}
    // polymorphism
    //to print out different words without retyping
    string toString();
    // virtual is a MUST if you want every other class to print the same details 
    virtual string getHeroType(); 
    virtual void attack();
    virtual void biography();
    //void useItem(Item item);

};


#endif /* Hero_hpp */
