#include <stdio.h>

//STRUCTURE:
struct Shoe{
	char label[15];
	int size;
	char colour[10];
};

//UNION:
union Price{
	float bread;
	float jam;
	int car;
	float computer;
	
};

int main(){
	
	struct Shoe myShoe;
	union Price myItems;

	scanf(" %s", &myShoe.label);
	scanf("%d", &myShoe.size);
	scanf(" %s", &myShoe.colour);

	
	printf("MY SHOE:\n");
	printf("Label: %s\n", myShoe.label);
	printf("Size: %d\n", myShoe.size);
	printf("Colour: %s\n\n", myShoe.colour);
	
	printf("MY ITEMS:\n");
	scanf("%f", &myItems.bread);
	printf("bread: %f\n", myItems.bread);
	scanf("%f", &myItems.jam);
	printf("jam: %f\n", myItems.jam);
	scanf("%d", &myItems.car);
	printf("car: %d\n", myItems.car);
	scanf("%f", &myItems.computer);
	printf("computer: %f\n", myItems.computer);
	
	

	return 0;
}

