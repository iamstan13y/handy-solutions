#include <stdio.h>
#include <string.h>

int main(){

    char num1[50], num2[50];
    printf("Enter Number To Check if its Palindrome:\n");
    scanf("%s", &num1);

    strcpy(num2, num1);
    strrev(num1);

    if (strcmp(num1,num2)==0){
        printf("Your Number is Palindrome!!!!!!");
    } else {
        printf("Get the f outta here!!");
    }
}
