#include <stdio.h>

int main() {

	int a,b;
	
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	
	a=a+b; 
	b=a-b; 
	a=a-b; 
	
	printf("The value of a is now %d and b is now %d", a,b);
	
	return 0;



}
