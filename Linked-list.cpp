#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *Creat_A_NewNode(int val){
    struct Node *nn = (struct Node*)malloc(sizeof(struct Node));
    nn->data = val;
    nn->next = NULL;
    return nn;
}
void PrintALinkedList(struct Node *head){
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void Creat_A_LInked_List(int val){
    struct Node* nn = Creat_A_NewNode(val);
    if(head == NULL){
       // printf("hi");
        head = nn;
        tail = nn;
        
    }
    else{
        tail->next = nn;
        tail = tail->next;
    }
    
    
}
int main(){
    for(int i = 0 ; i < 5 ; i++){
        int val;
        scanf("%d",&val);
        Creat_A_LInked_List(val);
    }
    PrintALinkedList(head);
    
}
