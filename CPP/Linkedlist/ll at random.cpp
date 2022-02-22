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
        new_node->next=NULL;
        
    }
    else{
        new_node->data=data;
        new_node->next=head;
        
        
    }
    head=new_node;
    return head;
}
node * insert(node *head,int pos,int data){
     int count=1;
     node *q=head;
     node *new_node=new node();
     
    if(pos==1)
        head=push(head,data);
   
    else{
        while(q!=NULL){
            if(pos-1==count){
               
                new_node->data=data;
                new_node->next=q->next;
                q->next=new_node;
                break;
            }
            q=q->next;
            count++;
        }
    }

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
   head=insert(head,pos[i],n[i]);
 
printl(head);
cout<<"\nAfter inserting:";
head=insert(head,2,17);
printl(head);
return 0;
}