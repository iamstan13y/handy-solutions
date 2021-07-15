#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    
    int rnd, x; 
    srand(time(NULL));

    for (x = 0; x<=10; x++){
        rnd = (rand() % 500) + 1;
        printf("%d\n", rnd);
    }

    return 0;
}