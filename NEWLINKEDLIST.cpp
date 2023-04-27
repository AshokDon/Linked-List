#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Node{
    public: 
    int data;
    Node *next;
    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

class LikedList{
    Node *head,*tail;
    public:
    LikedList(){
        head = tail = NULL;
    }
    void Insert(int val){
        Node *nn = new Node(val);
        if(head == NULL){
            head = nn;
            tail = nn;
        }
        else{
            tail->next = nn;
            tail = nn;
        }
        
    }
    void Dispaly(){
        Node *temp = head;
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void Delete_At_Front(){
        
    }
    void Delete_At_End(){
        
    }
    void Delete_At_Middle(){
        
    }
};


int main(){
   int n;
   cin >> n;
   LikedList list;
   for(int i = 0 ; i < n ; i++){
       int x;
       cin >>x;
       list.Insert(x);
   }
   list.Dispaly();
   
}
