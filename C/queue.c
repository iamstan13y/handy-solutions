/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

int main(){
	int input, x;
	for (x = 1; x <= 5; x++){
		scanf("%d", &input);
		Enqueue(input);
	}
	Display();
	Dequeue();
	Display();
	return 0;
}

struct Node{
	int data;
	struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void Enqueue(int x){
	struct Node *newnode;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = x;
	newnode->next = NULL;
	
	if (front == NULL && rear == NULL){
		front = rear = newnode;
	} else{
		rear->next = newnode;
		rear = newnode;
	}
}

void Display(){
	struct Node *temp;
	if (front == NULL && rear == NULL){
		printf("Queue Is Empty!");
	} else {
		temp = front;
		while (temp != NULL){
			printf("%d ", temp->data);
			temp = temp->next;
		}
	}
}

void Dequeue(){
	struct Node *temp;
	temp = front;
	if (front == 0 && rear == 0){
		printf("Queue Is Empty!");
	} else {
		printf("Dequeued Element is %d\n", front->data);
		front = temp->next;
		free(temp);
	}
}
