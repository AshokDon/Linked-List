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
    void Add_At_Front(int val){
        Node *nn = new Node(val);
        if(head==NULL){
            head = nn;
        }
        else{
            nn->next = head;
            head = nn;
        }
    }
    void Add_At_End(int val){
        Node *nn = new Node(val);
        tail->next = nn;
        tail = nn;
    }
    void Add_At_Middle(int l , int r, int val){
        //[1,2,3,5,6,7,8]
        //     t    
        Node* temp = head;
        Node* n1;
        Node* n2;
        while(temp->data!=l){
            temp = temp->next;
        }
        n1 = temp;
        n2 = temp->next;
        n1->next = nn;
        nn->next = n2;
        
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
