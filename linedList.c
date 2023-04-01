#include<stdio.h>
#include<stdlib.h>
//using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node_t;
node_t *head = NULL;
node_t *tail = NULL;
node_t *NewNode(int val){
    node_t *nn = (struct Node*)malloc(sizeof(struct Node));
    nn->data = val;
    nn->next = NULL;
    return nn;
}
void Creat_A_LinkedList(int val){
    node_t *temp = NewNode(val);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        tail = tail->next;
    }
}
void Print_LinkedList(node_t *head){
    node_t *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main(){
    TakeInput();
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        int val;
        scanf("%d",&val);
        Creat_A_LinkedList(val);
    }
    Print_LinkedList(head);
    //to insert at first
    //to insert at last
    //to insert at middle -->val;



    

    
}



