#include<stdio.h>

int main()
{
	int a, b;
	char op;
	
	printf("Enter a: \n");
	scanf("%d", &a);
	printf("Enter operator: \n");
	scanf(" %c", &op);
	printf("Enter b:\n");
	scanf("%d", &b);
	
	
	switch (op){
		
		case '/':
			printf("Answer: %d", a/b);
			break;
		case '+':
			printf("Answer: %d", a+b);
			break;
		case '-':
			printf("Answer: %d", a-b);
			break;
		case '*':
			printf("Answer: %d", a*b);
			break;
		default:
			printf("error");
			break;
	}
	
	return 0;
}

