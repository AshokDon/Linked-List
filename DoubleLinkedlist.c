//linkedlist creation
#include<stdio.h>
#include<stdlib.h>
//Double linkedlist
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;
struct Node *tail = NULL;
struct Node *CreatANode(int val){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void Creat_A_Double_Linkedlist(int val){
    struct Node *newNode = CreatANode(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;

    }
    else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void DisplayLinkedList(){
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void ReverseDisplay(){
    struct Node* temp = tail;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
}
//insert a node at first
//insert a node at last
//insert a node at given position

//delete a node at first
void DeleteAtFirst(){
    struct Node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);

}
//delete a node at last
void DeleteAtLast(){
    struct Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(temp);
}
//delete a node at given position
void DeleteAtaPosition(int pos){
    struct Node *temp = head;
    for(int i = 0 ; i < pos-1 ; i++){
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}
void InsertAtFisrt(int val){
    struct Node *newNode = CreatANode(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

void InsertNodeAtFirst(int val){
    //creat a newNode
    struct Node *newNode = CreatANode(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main(){
    //length of linkedlist
    int n;//5
    //given n values
    scanf("%d",&n); // 5
    //10 20 30 40 50
    for(int i = 0 ; i < n ; i++){
        int val;
        scanf("%d",&val);//10
        Creat_A_Double_Linkedlist(val);//20
    }
    //print the linkedlist
    InsertNodeAtFirst(100);
    DisplayLinkedList();
    ReverseDisplay();
    
    



}
