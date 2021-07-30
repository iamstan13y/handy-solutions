//Demonstrating the Tower of Hanoi using 3 Disks
#include <stdio.h>

void moveDisks(int, char, char, char);

int main(){
	
	int numOfDisks=3;
	printf("The Sequence Of Moves Using 3 Disks Are As Follows:\n");
	moveDisks(numOfDisks, 'A', 'B', 'C');
	return 0;
}

void moveDisks(int disk, char peg1, char peg2, char peg3){
	
	if (disk==1){
		
		printf("Move Disk 1 From Peg %c to Peg %c\n", peg1,peg3);
		return;
	} else{
			
	moveDisks(disk-1,peg1,peg3,peg2);
	printf("Move Disk %d From Peg %c to Peg %c\n", disk,peg1,peg3);
	moveDisks(disk-1,peg2,peg1,peg3);
	}
}
