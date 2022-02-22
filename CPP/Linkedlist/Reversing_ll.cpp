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

int main(){
   Node *head,*temp;
    for(int i=1;i<=5;i++){
        head=insert(head,i);
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return 0;
}