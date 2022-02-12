#ifndef DICE_ROLL_H
#define DICE_ROLL_H

#include <vector>

class dice_roll{
    private:
    int dice_num;

    const int DICE_MAX = 6;
   
    std::vector<int> rolls;

    void better_insert(int val);

    void reroll();
    
    public:

    dice_roll(char* args[]); // number of rolls

    int roll_dice(); 
};
#endif // DICE_ROLL_H