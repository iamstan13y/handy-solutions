#include <stdio.h.>

int main() {
	int a, b, c;

	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b:\n");
	scanf("%d", &b);
	printf("Enter c:\n");
	scanf("%d", &c);

	if ( a > b && a > c){

		if (b > c){
			printf("The Greatest of these numbers is: %d\n", a);
			printf("The numbers in ascending order are:\n %d \t %d \t %d", c,b,a);
		} else{
		    printf("The Greatest of these numbers is: %d\n", a);
			printf("The numbers in ascending order are:\n %d \t %d \t %d", b,c,a);
		}

	} else if (a > b && a < c){
		printf("The Greatest of these numbers is: %d\n", c);
		printf("The numbers in ascending order are:\n %d \t %d \t %d", b,a,c);
	} else if (b > a && b < c ){
		printf("The Greatest of these numbers is: %d\n", c);
	    printf("The numbers in ascending order are:\n %d \t %d \t %d", a,b,c);
	} else if (b > a && a > c ){
		printf("The Greatest of these numbers is: %d\n", b);
	    printf("The numbers in ascending order are:\n %d \t %d \t %d", c,a,b);
	} else if (b > c && c > a ) {
		printf("The Greatest of these numbers is: %d", b);
	    printf("The numbers in ascending order are:\n %d \t %d \t %d", a,c,b);
	} else {
	    printf("Error");
	}
}
