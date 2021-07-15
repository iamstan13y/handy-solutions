#include <stdio.h>

int isleap(int year){

    if(year%4==0){
        return 1;
    } else {
        return 0;
    }

}

int main() {

    int year;
    printf("Enter Any Year:\n");
    scanf("%d", &year);

    if (isleap(year)==1)
    {
        printf("%d is a leap year!", year);
    } else {
        printf("%d is not a leap year!", year);
    }
    
    return 0;
}