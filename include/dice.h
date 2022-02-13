#ifndef DICE_H
#define DICE_H

/**
 * @brief An individual dice. Can be rerolled
 * 
 */

class Dice{
    public:
        const int MAX_DICE = 6; 

        int value;

        Dice(int val);
};


#endif 