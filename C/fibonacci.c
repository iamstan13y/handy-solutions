#include <stdio.h>

int main() {

    int i, term_n, terms, term1=0,term2=1;
    printf("Enter Number of terms you want:\n");
    scanf("%d", &terms);

    for (i = 1; i<=terms; i++){

        term_n = term1 + term2;
        
        if (term_n<2){
           printf("%d\n", 1);
           term1++; 
           
        } else {

            printf("%d\n", term_n);
        }
        term1=term2;
        term2=term_n;
        
    }
    return 0;
}