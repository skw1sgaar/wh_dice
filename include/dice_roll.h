#ifndef DICE_ROLL_H
#define DICE_ROLL_H

#include <vector>

// TODO Redo this, and plan it better

// All the modifiers that are common
enum modifier{
    reroll_1,
    reroll_all,
    plus_1,
    minus_1
};

class dice_roll{
    private:
    int dice_num;

    const int DICE_MAX = 6;
   
    std::vector<int> rolls;

    void better_insert(int val);

    void reroll(std::vector<modifier> mods, int &dice);
    
    public:

    dice_roll(char* args[]); // number of rolls

    int roll_dice(); 
};

#endif // DICE_ROLL_H