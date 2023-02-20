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
    struct  Node{
        int data;
        Node *next;
        Node(int val){
            data = val;
            next = NULL;
        }
    };
    
    Node *head;
public:
    LinkedList(){
        head = NULL;
    }
    void InsertNode(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
    }
    void de

};
int main()
{
    TakeInput();
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);
    head->next = first;
    first->next = second;
    PrintList(head);

}
