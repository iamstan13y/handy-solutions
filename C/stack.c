/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

int main(){	
  int input, i;
  for (i = 0; i < 5; i++){
  	scanf("%d", &input);
  	Push(input);
  }
  Display();
  Peek();
  Pop();
  Display();
  return 0;
}

struct Node{
	int data;
	struct Node *next;
};

struct Node *top = NULL;
void Push(int x){
	struct Node *newnode;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = x;
	newnode->next = top;
	top = newnode;
}

void Display(){
	struct Node *temp;
	temp = top;
	if (top == NULL){
		printf("List is Empty!");
	} else {
		while (temp != NULL){
			printf("%d ", temp->data);
			temp = temp->next;
		}
	}
}

void Peek(){
	if (top == NULL){
		printf("Stack is Empty!");
	} else {
		printf("\nData at the top is %d", top->data);
	}
}

void Pop(){
	struct Node *temp;
	temp = top;
	
	if (top == NULL){
		printf("Stack is empty!");
	} else {
		printf("\nthe popped element is: %d\n", temp->data);
		top = temp->next;
		free(temp);
	}
}
