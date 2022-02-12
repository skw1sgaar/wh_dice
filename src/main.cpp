#include <iostream>

#include "dice_roll.h"

int main(int argc, char *argv[]){

    if(argc < 2){
        std::cout << "wh_dice <number of dice> [arg1] [arg2] ...\n";
        return EXIT_FAILURE;
    }

    dice_roll roll();

    return EXIT_SUCCESS;
}