#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    char name[]="NULL",crushName[]="NULL";
    int x, nameSum=0, crushSum=0;
    int luvPercent;

    printf("Wanna Know How Much You Love Your Crush?\n\n");
    printf("Enter Your Name:\n");
    scanf("%s", &name);
    printf("Enter Your Crush's Name:\n");
    scanf("%s", &crushName);

    for (x = 0; x < strlen(name); x++){
        nameSum+=toascii(name[x]);
    }

    
    for (x = 0; x < strlen(crushName); x++){
        crushSum+=toascii(crushName[x]);
    }

    if (nameSum < crushSum){
        luvPercent=(nameSum*100)/crushSum;
    } else {
        luvPercent=(crushSum*100)/nameSum;
    } 
    
    printf("You Love Your Crush: %d \%%\n", luvPercent);

}