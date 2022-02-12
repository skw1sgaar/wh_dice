#include <algorithm>
#include <cstdlib>
#include <iostream>


#include "dice_roll.h"

void dice_roll::better_insert(int val){
    if(val < 1 || val > 6){
        rolls.insert(std::lower_bound(rolls.begin(), rolls.end(), val), val);
    }
    else{
        std::cout<< "Something went very wrong\n";
    }
}

int dice_roll::roll_dice(){
    srand(time(0));

    return rand() % DICE_MAX;
}

void dice_roll::reroll(std::vector<modifier> mods, int &dice){
    auto copy_of_mods = mods;

    srand(time(0));

    for(auto mod : mods){
        switch(copy_of_mods[0]){
            case 0:
                if(dice == 1){
                    dice = rand() % DICE_MAX;
                }
                break;
            case 1:
                //do something
                break;
            case 2:
                //do something
                break;
            case 3:
                //do something
                break;
            default:
                std::cout<<"oops\n";
        };

        copy_of_mods.erase(copy_of_mods.begin());
    }
}
