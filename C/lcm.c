#include <stdio.h>

int main(){

    int num1, num2, mult1,mult2;
    printf("Enter 2 Numbers to find LCM:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    mult1=num1;
    mult2=num2;
    while(num1!=num2){
        
        if (num1<num2){
            num1+=mult1;
        } else if (num2<num1){
            num2+=mult2;
        }
        
    }

    printf("The LCM is: %d", num2);
}