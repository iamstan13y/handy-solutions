/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

//PASSING PARAMETER BY VALUE:
int main(){
	
	int num;
	
	printf("Enter the value of num:\n");
	scanf("%d", &num);
	printf("The value of num is: %d\n", num);
	printf("The square of num is: %d\n", square(num));
	printf("The value of num is still: %d\n", num);
    return 0;
}

int square(int x){
	
	//This does not change the value of num in the main function:
	x=x*x;
	return x; 
}
