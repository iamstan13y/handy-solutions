/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

struct studentMarks{

	int mark1,mark2,mark3,mark4,mark5;
	int total;
};

int calc(int a, int b, int c, int d, int e){

	return a+b+c+d+e;
}

int main(){

	struct studentMarks Rodney;
	printf("Enter Rodney's Marks:\n");
	scanf("%d", &Rodney.mark1);
	scanf("%d", &Rodney.mark2);
	scanf("%d", &Rodney.mark3);
	scanf("%d", &Rodney.mark4);
	scanf("%d", &Rodney.mark5);
	
	Rodney.total=calc(Rodney.mark1, Rodney.mark2, Rodney.mark3, Rodney.mark4, Rodney.mark5);
	printf("The total: %d", Rodney.total);
    return 0;
}


