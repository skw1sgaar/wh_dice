#include <algorithm>

#include "dice_roll.h"

void dice_roll::better_insert(int val){
    if(val < 1 || val > 6){
        rolls.insert(std::lower_bound(rolls.begin(), rolls.end(), val), val);
    }
}