/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>
#define MAX 7

int myArray[MAX];

void Sort(){
	int i, insertValue, position;
	
	for (i = 1; i < MAX; i++){
		insertValue = myArray[i];
		position = i;
		
		while (position > 0 && myArray[position - 1] > insertValue){
			myArray[position] = myArray[position - 1];
			position--;
		}
		
		if (position != i){
			myArray[position] = insertValue;
		}
	}
	
	for (i = 0; i < MAX; i++){
		printf("%d ", myArray[i]);
	}
}

int main(){
	int num, i;
	printf("Enter any 7 numbers:\n");
	for (i = 0; i < MAX; i++){
		scanf("%d", &num);
		myArray[i] = num;
	}
	Sort();
  return 0;
}

