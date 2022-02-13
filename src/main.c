#include "stdio.h"
#include "stdlib.h"
#include "string.h"

#include "dice.h"

#define DICE_MAX 6

int main(int argc, char* argv[]){

    if(argc < 2){ 
        printf("pls give number of dice\n");
        return 1;
    }

    dice_roll *hand = malloc(sizeof(dice_roll));

    // grabbing dice
    int roll[atoi(argv[1])];

    return 0;
}