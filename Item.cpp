//
//  Item.cpp
//  HeroTest
//
//  Created by Nguyen Do Lam Ha  on 4/11/19.
//  Copyright © 2019 Nguyen Do Lam Ha . All rights reserved.
//

#include <iostream>
#include <string>
#include "Item.hpp"
#include "Hero.hpp"

Item::Item( string itemName )
{
    name = itemName;
}

Item::Item()
{};

/*void Item::use(Hero& hero)
{
    cout << " The" + hero.getHeroType() + " " + hero.getName() + " uses this item" + getName() << endl;
}
*/
