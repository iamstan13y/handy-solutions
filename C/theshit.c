/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

int main(){
	char name[10];
	int age;
//	double height, weight;
//	
	printf("Enter name:\n");
	scanf("%s", &name);
	printf("Enter age:\n");
	scanf("%d", &age);
//	printf("Enter height:\n");
//	scanf("%lf", &height);
//	printf("Enter weight:\n");
//	scanf("%lf", &weight);
//	
//	printf("\nName: %s\n", name);
//	printf("Age: %d\n", age);
//	printf("Height: %f\n", height);
//	printf("Weight: %f %f", weight, height);
printf("Your name is %s and you are %d years old", name, age);
  return 0;
}

