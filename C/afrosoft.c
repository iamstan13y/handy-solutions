#include<stdio.h>

int main()
{
	int size = 5;
	int a = 5;
	size = 4;
	
	int j;
	for (j = size; j >= 0; j--)
	{
		printf("%d", a);
		a = a - 2;
	}
	
	return 0;
}
