#include "dice.h"

int roll(){
    srand(time(0));

    return (rand() % 6) + 1;
}

dice_roll grab_dice(int num){

}