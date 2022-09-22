#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
};
void Displaydata(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main() {
    //creat the pointer 
	Node *head = NULL;
	Node *first=NULL;
	Node *second=NULL;
	// allocate the node 
	head=new Node;
	first=new Node;
	second=new Node;
	
	head->data=1;
	head->next=first;
	
	first->data=2;
	first->next=second;
	
	second->data=3;
	second->next=NULL;
	
	Displaydata(head);
	
	
	
	
	return 0;
}
This is very good code.
