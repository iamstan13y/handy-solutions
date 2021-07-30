/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>
#include <time.h>

int main()
{
	
	srand(time(NULL));	
	
	int rndNumber = rand() % 10;
	int luckyNum;
	
	printf("Enter lucky btwn 0 and 10\n");
	scanf("%d", &luckyNum);
	
	if (luckyNum == rndNumber)
	{
		printf("You've Won!");
	} else 
	{
		printf("Try Again!\n");
		printf("Lucky number was: %d", rndNumber);
	}
	
  return 0;
}

