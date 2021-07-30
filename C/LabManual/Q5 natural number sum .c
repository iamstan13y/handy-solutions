#include <stdio.h>

int main(){
	
	int i, N, num, sum=0;
	
	printf("How many natural numbers do you want to add?\n");
	scanf("%d", &N);
	
	printf("Enter the %d natural numbers:\n", N);
	for (i=0; i<N;i++){
		scanf("%d", &num);
		if (num>0){
		    sum+=num;
	    } else {
	    	printf("That ain't a prime number faggot!\n");
	    	break;
		}
	}
	printf("The Sum is: %d\n", sum);
	
	return 0;
}
