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
