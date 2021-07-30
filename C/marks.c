#include <stdio.h>

int main(){
	int paper1, paper2;
	int finalmark = 0;
	
	printf("Enter mark for Paper 1:\n");
	scanf("%d", &paper1);
	printf("Enter mark for Paper 2:\n");
	scanf("%d", &paper2);
	
	finalmark = ((paper1 + paper2) * 100) / 200;
	
	if (finalmark >= 75 && finalmark <= 100){
		printf("You got an A, your mark is %d", finalmark);
	} 
	else if (finalmark >= 65 && finalmark < 75){
		printf("You got a B, your mark is %d", finalmark);
	}
	else if (finalmark >= 50 && finalmark < 65){
		printf("You got a C, your mark is %d", finalmark);
	} 
	else if (finalmark >= 40 && finalmark < 50){
		printf("You got a D, your mark is %d", finalmark);
	}
	else if (finalmark < 40){
		printf("You got a U, your mark is %d", finalmark);
	}
  return 0;
}

