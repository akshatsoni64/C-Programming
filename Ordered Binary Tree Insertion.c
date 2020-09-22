// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node * l;
    int data; 
    struct Node * r;
};
typedef struct Node node;

void insertTree(node ** tree, int val){
    node * temp = NULL;
    if(!(*tree)){
        temp = (node *)malloc(sizeof(node));
        temp->l = temp->r = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }
    
    if(val < (*tree)->data){
        insertTree(&(*tree)->l, val);
    }
    
    if(val > (*tree)->data){
        insertTree(&(*tree)->r, val);
    }
}

void displayTree(node * head){
    if(head){
        displayTree(head->l);
        printf("%d\n", head->data);
        displayTree(head->r);
    }
}

int main() {
    node *root;

    root = NULL;
    
    insertTree(&root, 5);
    insertTree(&root, 4);
    insertTree(&root, 6);
    insertTree(&root, 1);
    insertTree(&root, 3);
    insertTree(&root, 7);
    
    displayTree(root);
    
    return 0;
}