#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
 
Node * insert(Node *head,int data){

    Node *temp=new Node();
    
    if(head==NULL){
        temp->data=data;
        temp->next=NULL;
     }
    else{
        temp->data=data;
        temp->next=head;
    }
    head=temp;
    return head;
}
Node *reverse(Node *head){
    Node *prev=NULL;
    Node *current=head;
    Node *next=NULL;
  
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        }
        head=prev;
    return prev;
}

int main(){
   Node *head=NULL,*temp;
    for(int i=1;i<=5;i++){
        head=insert(head,i);
    }
   
    temp=head;
    cout<<"Before Reversing:";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    head=reverse(head);
    temp=head;
      cout<<"\nAfter Reversing:";
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }


    return 0;
}