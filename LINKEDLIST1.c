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

//======================================================== Optimized code for linked List ===============================================================//

//linkedlist creation
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;
void InsertintoLinkedList(int val){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
int main(){
    //length of linkedlist
    int n;
    //given n values
    scanf("%d",&n); // 5
    //10 20 30 40 50
    for(int i = 0 ; i < n ; i++){
        int val;
        scanf("%d",&val);//10 20
        InsertintoLinkedList(val);//20
    }


}
