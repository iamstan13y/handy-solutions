/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

struct Node{
int data;
struct Node * next;	
};

int main(){
	
	struct Node * head, * newnode, * temp, * temp2;
	head = NULL;
	int num, i;
	
	printf("Enter 5 numbers:\n");
	for (i = 0; i < 5; i++){
		scanf("%d", &num);
		
		newnode = (struct Node*)malloc(sizeof(struct Node));
		newnode->data = num;
		newnode->next =NULL;
		
		if (head == NULL){
			head = temp = newnode;
			
		} else {
			temp->next = newnode;
			temp = newnode;
		}
	}
	
	temp = head;
	while (temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
  return 0;
}

