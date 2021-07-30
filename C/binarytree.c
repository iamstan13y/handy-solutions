#include <stdio.h>

//Represent a node of the binary tree
struct node{
    int data;
    struct node *left;
    struct node *right;
};

//Represent the root of the binary tree
struct node *root;

//Represent the head and tail of the doubly linked list
struct node *head, *tail = NULL;
 
//createNode() will create a new node
struct node* createNode(int data){
    //Create a new node
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    //Assign data to newNode, set left and right child to NULL
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}

 
//convertbtToDLL() will convert the given binary tree to corresponding doubly linked list
void convertbtToDLL(struct node *node) {
    //Checks whether node is NULL
    if(node == NULL)
        return;
    
    //Convert left subtree to doubly linked list
    convertbtToDLL(node->left);
    
    //If list is empty, add node as head of the list
    if(head == NULL) {
        //Both head and tail will point to node
        head = tail = node;
    }
    //Otherwise, add node to the end of the list
    else {
        //node will be added after tail such that tail's right will point to node
        tail->right = node;
        //node's left will point to tail
        node->left = tail;
        //node will become new tail
        tail = node;
    }
    
    //Convert right subtree to doubly linked list
    convertbtToDLL(node->right);
}
 
//display() will print out the nodes of the list
void display() {
    //Node current will point to head
    struct node *current = head;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Nodes of generated doubly linked list: \n");
    while(current != NULL) {
        //Prints each node by incrementing pointer.
        printf("%d ",current->data);
        current = current->right;
    }
    printf("\n");
}


int main(){

 //Add nodes to the binary tree
    root = createNode(10);
    root->left = createNode(12);
    root->right = createNode(15);
    root->left->left = createNode(25);
    root->left->right = createNode(30);
    root->right->left = createNode(36);
    
    //Converts the given binary tree to doubly linked list
    convertbtToDLL(root);
    
    //Displays the nodes present in the list
    display();    	
    
  return 0;
}

