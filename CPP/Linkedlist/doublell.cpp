#include <iostream>
using namespace std;
//insert,delete at all positions.
class node{
    public:
    int data;
    node *next;
    node *prev;
};
int ncount(node *head){
    int count=0;
    while (head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}
node *del(node *head,int pos){
    int count=1;
    int n=ncount(head);
    node *temp=head;
    if(pos==1){
        head=temp->next;
        delete temp;
    }

    else if(pos==n){
            while(count!=pos){
                temp=temp->next;
                count++;
            }
            temp->prev->next=NULL;
            delete temp;

    }

    else{
        while(temp->next!=NULL && pos!=count){
            temp=temp->next;
            count++;
         }
     temp->next->prev=temp->prev;
     temp->prev->next=temp->next;
     delete temp;
         
    }
    return head;
}
node* push(node *head,int data){
    node *new_node=new node();
    if(head==NULL){
        new_node->data=data;
        new_node->next=NULL;
        new_node->prev=NULL;
        head=new_node;
        
    }
    else{
        new_node->data=data;
        new_node->next=head;
        head->prev=new_node;
        new_node->prev=NULL;
        head=new_node;
        
    }
    return head;
}
node *insert(node *head,int pos,int data){
    node *temp=head;
    int count=1;
    node *new_node=new node();
    if(pos==1||head==NULL){
        head=push(head,data);
    }
    else{
        while(temp!=NULL){
            if(pos-1==count){
                
                new_node->data=data;
                new_node->prev=temp;
                new_node->next=temp->next;
                temp->next=new_node;
                break;
                
            }
            temp=temp->next;
            count++;
            
        }
    }
    return head;
    
}

void display(node *head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL";
}
int main(){
    node *head=NULL;
    int x[]={5,7,9,65,8};
    for(int i=0;i<5;i++){
        //cout<<x[i]<<endl;
        head=push(head,x[i]);
    }
    head=insert(head,4,96);
    display(head);
    cout<<"\nAfter deletion:";
    head=del(head,6);
    display(head);
    //node *tail=new node();
    
    return 0;
}