#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

class LinkedList{
public:
    struct Node
    {
        int data;
        Node *next;
        Node(int val){
            data = val;
            next = NULL;
        }
    };
    Node *head;
    Node *tail;
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void Insert(int x){
        //creat a new node 30,NULL
        Node *newNode = new Node(x);
        if(head==NULL){
            head = newNode;
            tail = newNode
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void Printdata(){
        Node *temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void InsertAtBegin(int x){
        //fill this fuction

    }
    void InsertAtEnd(int x){
        //fill this fuction
    }
    void InsertAtPosition(int x,int pos){
        //fill this function
    }

};
int main(){
    TakeInput();
    LinkedList list;
    list.Insert(10);
    list.Insert(20);
    list.Insert(30);
    //insert at begin
    //insert at end 
    //insert in middle

    list.Printdata();

}




