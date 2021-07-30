/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

int main(){
	
	char iString[20];
	printf("Enter The Uppercase Characters:\n");
	scanf(" %s", &iString);
	printf("\nThe Same Characters In Lowercase: %s", strupr(iString));

	return 0;
}

