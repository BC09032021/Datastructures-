//Insertion at begining
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
node * insert(node *head,int data){
    node *new_node=new node();
    if(head==NULL){
        new_node->data=data;
        head=new_node;
    }
    else{
        new_node->data=data;
        new_node->next=head;
        head=new_node;
        
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
    int n;
    node *head=NULL;
   
    
  while(true)
  {
  cout<<"n:";
  cin>>n;
  if(n==-1)
    break;
  else
     head=insert(head,n);
  printl(head);
}
return 0;
}

