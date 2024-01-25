//linkedlist creation
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    //allocate memory for nodes in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data = 1;
    head->next = second;

    //link second and third nodes
    second->data = 2;
    second->next = third;

    //terminate the list at the third node
    third->data = 3;
    third->next = NULL;
    
}
