/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

#define MAX 5

int myArray[MAX];

void Sort(){
	int i;
	
	for (i = 0; i < MAX-1; i++){
		int minID = i;
		int j;
		for ( j = i+1; j < MAX; j++){
			if (myArray[j] < myArray[minID]) minID = j;
		}	
		
		int temp = myArray[minID];
		myArray[minID] = myArray[i];
		myArray[i] = temp;
		Display();
	}
	
}

void Display(){
	int i;
		printf("[ ");
		for (i = 0; i < MAX; i++){
		printf("%d, ", myArray[i]);
	}
	printf(" ]\n");
}

int main(){
	printf("ENter any 5 numbers\n");
	int i, num;
	
	for (i = 0; i < MAX; i++){
		scanf("%d", &num);
		myArray[i] = num;
	}
	Sort(myArray);
  return 0;
}



