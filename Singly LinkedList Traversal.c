// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node;

node * createLL(int n);
void displayLL(node * head);

int main() {
    // Execution Starts
    int n = 0; // Number of Nodes
    node * HEAD = NULL; // Head Node
    
    printf("How many nodes? ");
    scanf("%d",&n);
    
    HEAD = createLL(n); // Create Linkedlist of n Nodes
    
    displayLL(HEAD); // Print the Linkedlist
    
    return 0;
}

node * createLL(int n){
    int i = 0; // Variable for loop
    node * head = NULL; // head node
    node * temp = NULL; // temp node
    node * p = NULL; // node to traverse the linkedlist
    
    for(i = 0; i < n; i++){
        temp = (node*)malloc(sizeof(node)); // Allocate the memory to the temp node
        printf("\nEnter Data for Node %d: ", i+1); // Ask the value for current node
        scanf("%d", &(temp->data));
        temp->next = NULL; // define next node as NULL
        if(head == NULL){
            head = temp; // if new linkedlist then temp will be the head node
        }
        else{
             p = head; // Otherwise initialise the traversal node
             while(p->next != NULL){
                 p = p->next; // traverse the linkedlist
             }
             p->next = temp; // end the linkedlist here
        }
    }
    return head; // return the head node of the linkedlist
}

void displayLL(node * head){
    node * p = head; // Traversal Node
    while(p != NULL){
        printf("\t%d->", p->data); // Print the node data
        p = p->next; // Next node on the list
    }
}