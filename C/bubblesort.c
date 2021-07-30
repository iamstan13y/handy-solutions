/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>
#define MAX 5

int myArray[MAX];

void Sort(){
	int i, j;
	for (i = 0; i < MAX - 1; i++){
		for (j =i+1; j < MAX; j++){
			if (myArray[i] > myArray[j]){
				int temp = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = temp;
			}
		}
	}
	
	for (i = 0; i < MAX; i++){
		printf("%d ", myArray[i]);
	}
}

int main(){
	
	printf("Enter any 5 numbers:\n");
	int i, num;
	for (i = 0; i < MAX; i++){
		scanf("%d", &num);
		myArray[i] = num;
	}
	Sort();
  return 0;
}

