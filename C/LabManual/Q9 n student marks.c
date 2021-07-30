/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include<stdio.h>

int main(){
	
	int x, y, N;
	
	printf("Enter Number of Students (N):\n");
	scanf("%d", &N);
	char *students[N][N];
	int marks[4*N];
	int cnt=0;

	for (x=0;x<N;x++){

		printf("Enter Name of Student No.%d:\n", x+1);
		scanf(" %s", &students[x][0]);
		printf("Enter The 5 marks:\n");
		
		for (y=0;y<5;y++){
			scanf("%d", &marks[y+cnt]);
		}
		cnt+=5;
	}
	
	cnt=0;
	printf("\nThe Marks For The Students:\n");
    for (x=0;x<N;x++){
		printf("%s\t:", students[x]);
		
		for (y=0;y<5;y++){
			printf("%d\t", marks[y+cnt]);
		}
		printf("\n");
		cnt+=5;
	}
	
	return 0;
}

