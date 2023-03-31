#include<stdio.h>
#include<string.h>
//using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
struct Node{
    int data;
    struct Node *next;
};
//to print the data
void PrintLinkedList(struct Node *head){
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;  
    }

}
//to creat a new node with give data
struct Node* NewNode(int val){
    struct Node *result=(struct Node*)malloc(sizeof(struct Node));
    result->data = val;
    result->next=NULL;
    return result;
}
//to creat a dynamic linked list
void CreatALinkedList(struct Node* head , int val){
    //creat a new node
    struct Node* nn = NewNode(val);
    if(head==NULL){
        head = nn;
    }
    else{
        struct Node* dummy = head;
        while(dummy->next!=NULL){
            dummy = dummy->next;
        }
        dummy->next = nn;
    }
}
int main(){
    TakeInput();
    int val;
    scanf("%d",&val);
    struct Node* head = NewNode(val)
    
    for(int i =  1; i < 5 ; i++){
        scanf("%d",&val);
        CreatALinkedList(head,val);
    }
    head=head->next;
    PrintLinkedList(head);
   
}



