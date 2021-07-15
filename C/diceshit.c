#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int luckyNum, dice1, dice2;

    dice1=rand() % 6 + 1;
    dice2=rand() % 6 + 1;
    luckyNum=dice1+dice2;

    if (luckyNum==7 || luckyNum==11){
        printf("Hello Mother fucker You Won!!!");
    } else {
        printf("Try Luck Next Time\n");
        printf("Lucky Number Was: %d\n", luckyNum);
    }


}