/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

int main()
{
	int N;
	int i;
	int sum = 0;
	
	printf("Hey, enter the max value for N\n");
	scanf("%d", &N);
	
	for (i = 0; i <= N; i++)
	{
		sum += i;
	}
	
	printf("The sum is %d", sum);
  return 0;
}

