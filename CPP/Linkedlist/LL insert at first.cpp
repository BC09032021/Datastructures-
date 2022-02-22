#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertatbegin(Node *head,int n){
    Node *temp=new Node(n);
   // temp->data=n;
    temp->next=head;
    return temp;
    
}
void printl(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main() 
{ int n;
    Node* head=NULL;
    
    while(1){
        cout<<"Enter an element:";
        cin>>n;
        if(n==-1)
        break;
        head=insertatbegin(head,n);

    }
    
    printl(head);
    	return 0;
	
} 
