#include <stdio.h>

int main(){
	
	int N, n, oddSum=0, evenSum=0;

	printf("Enter The Max Value (N) For The Integer Range:");
	scanf("%d", &N);

	for (n=1; n<=N; n++){
		if (n%2==0){
			evenSum+=n;
		} else {
			oddSum+=n;
		}
	}

	printf("Sum of odd numbers: %d\n", oddSum);
	printf("Sum of even numbers: %d\n", evenSum);
    return 0;
}

