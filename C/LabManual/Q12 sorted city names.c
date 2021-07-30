/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

int main(){
	
	int x, y;
	char city[5][20];
	
	printf("Enter 5 City Names:\n");
	for (x=0;x<5;x++){
		scanf(" %s", &city[x]);
	}
	
	printf("\nThe Sorted List:\n");
	for (x=65;x<=122;x++){
		
		for (y=0;y<5;y++){
			if (city[y][0]==x){
				printf("%s\n", city[y]);
			}
		}
	}

    return 0;
}

