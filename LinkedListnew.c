#include<stdio.h>
#include<stdlib.h>

//creating user define data type using struct for node
struct Node{
    int data;
    struct Node *next;
    
};


struct Node *head = NULL;
struct Node *tail = NULL;


//O(1)
struct Node* Creat_A_Node(int val){
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = val;
    newnode->next = NULL;
    
    return newnode;
}
//O(n)
void Display(struct Node *head){
    struct Node* temp = head;
    while(temp){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
}
//O(n) --> O(1)
void Insert(int val){
    //check it is first node or not 
    struct Node *nn = Creat_A_Node(val); // 2
    if(head == NULL){
        head = nn;
        tail = head;
    }
    else{
        tail->next = nn;
        tail = tail->next;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        int val;
        scanf("%d",&val); // 1 2
        Insert(val);
    }
    Insert_At_Head(5);
    Display(head);
    
    
    
}
