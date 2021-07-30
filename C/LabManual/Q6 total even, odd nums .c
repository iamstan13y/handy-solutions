#include <stdio.h>

int main(){
	
	int i, N, n, oddCnt=0, evenCnt=0;
	 
	printf("How many numbers do you want to work with?\n");
	scanf("%d", &N);
	
	printf("Enter the %d integers:\n", N);
	for (i=0; i<N; i++){
		scanf("%d", &n);
		if (n%2==0){
			evenCnt+=1;
		} else {
			oddCnt+=1;
		}
	}
	
	printf("Total odd numbers entered: %d\n", oddCnt);
	printf("Total even numbers entered: %d\n", evenCnt);
	return 0;
}
