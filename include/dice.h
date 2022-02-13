#ifndef DICE_H
#define DICE_H

#include "stdlib.h"
#include "time.h"

typedef struct dice_roll{
    int *dice;
    size_t size;
    size_t limit;
}

dice_roll grab_dice(int num);

int roll();


#endif // DICE_H