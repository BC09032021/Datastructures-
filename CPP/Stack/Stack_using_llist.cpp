#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
class lstack{
public:
  node *push(node *top,int data) {
      node *new_node=new node();
      new_node->data=data;
      new_node->next=top;
      top=new_node;
      return top;
  }
  
  void disply(node *top){
      node *temp=top;
      while(temp!=NULL){
          
          cout<<temp->data<<" ";
          temp=temp->next;
      }
  }
  void peek(node *top){
      cout<<"\nThe top element in the stack is:"<<top->data;
      
  }
  node* pop(node *top){
      node *tmep=top;
      if(top==NULL){
          cout<<"Underflow condition"<<"\n";
      }
      else{
          cout<<top->data;
          top=top->next;
          free(temp);
          return top;
      }

      
  }
};
int main(){
    lstack st;
    node *top=NULL;
    st.pop(top);
    for(int i=0;i<5;i++){
        top=st.push(top,i);
    }
    st.disply(top);
    cout<<"\npoped element is:";
    top=st.pop(top);
    cout<<"\nremaning elements after poping are:";
    st.disply(top);
    st.peek(top);
    return 0;
}