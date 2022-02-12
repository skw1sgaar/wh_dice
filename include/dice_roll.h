#ifndef DICE_ROLL_H
#define DICE_ROLL_H

#include <vector>

class dice_roll{
    private:
    int dice_num;
   
    std::vector<int> rolls;

    public:
    void better_insert(int val);

    void roll_dice(); 
};
#endif // DICE_ROLL_H