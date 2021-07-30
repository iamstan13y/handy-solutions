#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, result, age, i;
	char name[50], sex;
	char operation = '\0';
	
	char vowels[10] = "AEIOUaeiou";
	
	printf("Enter Your Name, Age and Sex Below:\n\n");
	printf("Name:");
	scanf("%s", &name);
	printf("Sex (use M or F):");
	scanf("%s", &sex);
	printf("Age:");
	scanf("%d", &age);
	
	printf("\n\nEnter the 2 Numbers:\n");
	printf("Number 1:");
	scanf("%d", &num1);
	printf("Number 2:");
	scanf("%d", &num2);
	
	if (age > 20 && age < 25)
	{
		if (sex == 'M')
		{
			operation = '-';
			for (i = 0; i < 10; i++)
			{
				if (vowels[i] == name[0])
				{
					operation = '+';
					break;
				}
			}
		}
		else if (sex == 'F')
		{
			operation = '*';
			for (i = 0; i < 10; i++)
			{
				if (vowels[i] == name[0])
				{
					operation = '+';
					break;
				}
			}
		}
	}
	else if (age >= 25 && age < 30)
	{
		if (sex == 'M')
		{
			operation = '+';
			for (i = 0; i < 10; i++)
			{
				if (vowels[i] == name[0])
				{
					operation = '*';
					break;
				}
			}
		}
		else if (sex == 'F')
		{
			operation = '*';
			for (i = 0; i < 10; i++)
			{
				if (vowels[i] == name[0])
				{
					operation = '-';
					break;
				}
			}
		}
	}
	
	switch (operation)
	{
		case '*':
			result = num1 * num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '+':
			result = num1 + num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			printf("\nNo calculation was made!");
			break;
	}
	
	
	if (operation != '\0')
	{
		printf("\nThe result is: %d\n", result);
		printf("The result is ");
		if (result % 2 == 0)
		{
			printf("Even");
		}
		else
		{
			printf("Odd");	
		}
	}
return 0;
}

