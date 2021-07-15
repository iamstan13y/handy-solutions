#include <stdio.h>

int fact(int n){
    if (n<=1){
        return 1; 
    } else{
        return n*fact(n-1);
    }

}

int main(){

    int i,j;

    for (i=0;i<10;i++){

        for (j = 0; j<10-i-1; j++){
           printf(" ");
        }
        
        for (j=0;j<=i;j++){
            printf(" %d", (fact(i)/(fact(j)*fact(i-j))));
        }
        printf("\n");
    }
    return 0;
}