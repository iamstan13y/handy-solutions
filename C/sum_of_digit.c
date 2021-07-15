#include <stdio.h>

int main(){

    int x,num, sum=0;
    printf("ENTER ANY NUMBER:\n");
    scanf("%d", &num);

    while (num>0)
    {
        x=num%10;
        sum+=x;
        num/=10;
    }

    printf("Sum of the digits in the number: %d", sum);
    
    return 0;
}