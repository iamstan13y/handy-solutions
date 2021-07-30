/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

//CALL BY REFERENCE:
int main(){
	
	int num;
	
	printf("Enter value of num:\n");
	scanf("%d", &num);
	printf("The value of num is: %d\n", num);
	printf("The square of num is: %d\n", square(&num));
	printf("The value of num is now: %d\n", num);
    return 0;
}

int square(int *x){ //x here is a reference parameter
	
	//
	*x=*x**x;//this modifies the calling argument by assigning a value to the variable referred to by x;
	return *x;
}
