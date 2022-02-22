#include <iostream>
using namespace std;
class Node{
    public:
  int data;
  Node *next;
};
class sll{
    public:
  Node *insert(Node *head,int data){
      Node *new_node=new Node();
      new_node->data=data;
      new_node->next=head;
      head=new_node;
      return head;
      
  }
  Node *create_cycle(Node *head,int pos,int size){
      Node *temp=head;Node *cnode=head;int count=0;
      if(pos==-1||pos>size){
          return head;
      }
      else{
      while(temp->next!=NULL){
          temp=temp->next;
      }
      while(count!=pos-1){
          cnode=cnode->next;
          count++;
      }
      temp->next=cnode;
      return head;
      
      }
  }
  bool detect_cycle(Node *head){
      Node *slow_ptr=head;Node *fast_ptr=head;
      while(slow_ptr!=NULL && fast_ptr->next!=NULL){
          slow_ptr=slow_ptr->next;
          fast_ptr=fast_ptr->next->next;
          if(slow_ptr==fast_ptr)
            return true;
            
      }
      return false;
  }
};
int main() {
Node *head=NULL;
sll l;int n,p;
cout<<"Enter no. of elements:";
cin>>n;
for(int i=1;i<=n;i++){
    cout<<"Enter element "<<i<<":";
    cin>>p;
    head=l.insert(head,p);
   
}
cout<<"Enter the postion at which you want to be a loop or -1 to have no loop:";
cin>>p;
head=l.create_cycle(head,p,n);
if(l.detect_cycle(head))
  cout<<"Cycle Found";
else
  cout<<"cycle not found";
    return 0;
}
