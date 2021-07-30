/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

struct Node{
	int data;
	struct Node *next;
};	

int main(){
	
	struct Node *head, *newnode, *temp, *temp2;
	head = NULL;
	int num, i;
	
	printf("Enter 5 numbers:\n");
	for (i = 0; i < 5; i++){
		scanf("%d", &num);
		
		newnode=(struct Node*)malloc(sizeof(struct Node));
		newnode->data = num;
		newnode->next = NULL;
		
		if (head == NULL){
			head = temp = newnode;
		} else {
			temp->next = newnode;
			temp=newnode;
		}
	}
	
	temp = head;
	while (temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	
	
	//Insert At Specified Position:
	int Pos;
	i = 1;
	printf("\nEnter Position for new node:\n");
	scanf("%d", &Pos);
	temp = head;
	while (i < Pos-1){
		temp = temp->next;
		i++;
	}
	
	newnode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data for specified position:\n");
	scanf("%d", &newnode->data);
	newnode->next=temp->next;
	temp->next = newnode;
	
	temp = head;
	while (temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	
	//DELETE @ SPECIFIED LOCATION;
	i = 1;
	printf("\nEnter Position to delete node:\n");
	scanf("%d", &Pos);
	temp = head;
	while (i < Pos-1){
		temp = temp->next;
		i++;
	}
	temp2=temp->next;
	temp->next=temp2->next;
	free(temp2);
	
	temp = head;
	while (temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	
	//totals:
	temp = head;
	int sum = 0;
	while (temp != NULL){
		sum += temp->data;
		temp = temp->next;
	}
	printf("The sum of the elements is: %d", sum);
	return 0;
}
