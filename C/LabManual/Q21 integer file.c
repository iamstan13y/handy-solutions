/*
I'm a Programmer, I have no Life! ~</Stanley Brikkz>
*/
#include <stdio.h>

int main(){

	int num;
	FILE *myFile;
	myFile=fopen("intFile.txt", "w");
	scanf("%d",&num);
	fprintf(myFile, "%d", num);
    fclose(myFile);

	myFile=fopen("intFile","r");
	fscanf(myFile, "%d", num);
	printf("Data from file: %d\n", num);
	fclose(myFile);

    return 0;
}

