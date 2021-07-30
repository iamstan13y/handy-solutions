/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

void moveDisk(int, char, char, char);

int main(){
	int numOfDisks = 3;
	printf("The sequence of moving 3 disks is as follows:\n");
	moveDisk(numOfDisks, 'A', 'B', 'C');
	
  return 0;
}

void moveDisk(int disk, char peg1, char peg2, char peg3){
	if (disk == 1)
	{
		printf("move disk 1 from peg %c to peg %c\n", peg1, peg3);
		return;
	} else{
		moveDisk(disk - 1, peg1, peg3, peg2);
		printf("move disk %d from peg %c to peg %c\n",disk, peg1, peg3);
		moveDisk(disk -1, peg2, peg1, peg3);
	}
}

