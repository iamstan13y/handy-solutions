/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

struct studentInfo{
	
	char name[10];
	char surname[15];
	int age;
	char regNum[7];
	char degree[2];

};

int main(){
	
	struct studentInfo student;
	
	//INITIALIZATION:
	printf("Enter The Student Information:\n");
	printf("NAME:");
	scanf("%s", &student.name);
	printf("SURNAME:");
	scanf("%s", &student.surname);
	printf("AGE:");
	scanf("%d", &student.age);
	printf("REGISTRATION NUMBER:");
	scanf("%s", &student.regNum);
	printf("DEGREE:");
	scanf("%s", &student.degree);
	
	//OUTPUTTING:
	printf("<<<<\nTHE STUDENT INFORMATION>>>>\n\n");
	printf("NAME: %s\n", student.name);
	printf("SURNAME: %s\n", student.surname);
	printf("AGE: %d\n", student.age);
	printf("REG NUMBER: %s\n", student.regNum);
	printf("DEGREE: %s\n", student.degree);
	
    return 0;
}

