#include <stdio.h>

int main(){

	int N, i, num, cnt;

	printf("Enter the max value 'N' for your prime numbers:\n");
	scanf("%d", &N);

	printf("The prime numbers to N (%d) are:\n", N);
	for (num=1;num<=N;num++){

	    cnt=0;
    	for (i=1;i<=num;i++){

		    if (num%i==0){
			 cnt++;
	    	}
    	}

    	if (cnt==2){
	    	printf("%d\n", num);
    	}

  	}

	return 0;
}
