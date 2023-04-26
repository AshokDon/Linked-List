#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
class Node{
public:

    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }

};
class LinkedList{
    Node *head;
public:

    LinkedList(){
        head = NULL;
    }
    void insert(int val){
        Node *temp = new Node(val);
        if(head==NULL){
            head = temp;
        }
        else{
            Node* temp1 = head;
            while(temp1){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
    }
};
int main(){
    TakeInput();
    LinkedList list;
    list.insert(10);
    list.insert(20);

}


