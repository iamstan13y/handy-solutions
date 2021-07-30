#include <stdio.h>

int main() {
	
	int *Ptr;
	char *cPtr;
	float *fFloat;
	
	int iNumber=47;
	float fNumber=17.38;
	char cCharacter='C';
	
	Ptr=&iNumber;
	cPtr=&cCharacter;
	fFloat=&fNumber;
	
	printf("Value of iNumber: %d\n", iNumber);
	printf("Value of Ptr: %d\n", *Ptr);
	printf("Address of iNumber: %p\n", Ptr);
	printf("Address of Ptr: %p\n", &Ptr);
	return 0;
}
