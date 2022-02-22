#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node * push(node *head,int data){
    node *new_node=new node();
    if(head==NULL){
        new_node->data=data;
        
    }
    else{
        new_node->data=data;
        new_node->next=head;
        
        
    }
    head=new_node;
    return head;
}
node *insertsort(node *head,int data){
    node *newNode=new node();
    newNode->data=data;
    node *temp=head;
   
    
    if(head==NULL ||head->data>data){
        head=push(head,data);
    }
     node* current = head;
    while (current->next != NULL && current->next->data < newNode->data) {
        current = current->next;
    }
 
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

void printl(node *head){
   
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    
    
    node *head=NULL;
   
   int pos[]={1,2,3,4};
   int n[]={5,8,79,6};
   
for(int i=0;i<4;i++)
   head=insertsort(head,n[i]);
 
printl(head);
cout<<"\nAfter inserting:";
head=insert(head,3,17);
printl(head);
return 0;
}