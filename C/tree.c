/*
*I'm a Programm3r, I have no lif3! -Stan (o_X)
*/

#include <stdio.h>

struct node{
	int data;
	struct node *leftChild;
	struct node *rightChild;
};

void insert(int data){
	struct node *tempNode = (struct node*)malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;
	struct node *root;
	
	tempNode->data = data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;
	
	//if tree is empty, create root node:
	if (root == NULL){
		root = tempNode;
	} else {
		current = root;
		parent = NULL;
		
		while(1){
			parent = current;
			
			if (data < parent->	data){
				current = current->leftChild;
				
				if (current == NULL){
					parent->leftChild=tempNode;
					return;
				}
			} else{
				current = current->rightChild;
				
				if (current == 	NULL){
					parent->rightChild=tempNode;
					return;
				}
			}
		}
	}
}

int main(){
	
  return 0;
}

