#include <stdio.h>

int main() {
    int x;
    int *ptr;

	x = 10;
    ptr = &x;

	printf("Value of x is: %d\n", x);
    printf("Value of x (%d) is stored at address %u\n", x, &x);
    *ptr = 47;
    printf("Value of x is now %d\n",x);
                                                                    
   } 
