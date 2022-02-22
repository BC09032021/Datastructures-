#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *Next;//For storing the address of the next block.
};
//Inserting a new node at the beginging.
namespace atb{////atb-->At the beginging 
void push(Node **head_refer,int new_data){
    Node *new_head=new Node();
    new_head->data=new_data;
    new_head->Next=*head_refer;//Linking the previous head to the new head.
    *head_refer=new_head;//Storing the address of new_head.
}

}


//Inserting a node in ith position.


int main(){
    
    Node *Head=NULL;
    Node *secoend=NULL;
    Node *Third=NULL;
//Allocate nodes in the heap
    Head = new Node();
    secoend=new Node();
    Third=new Node();

    Head->data=18;// Acessing an Element from a Structure (*Head).data.
    Head->Next=secoend;
    secoend->data=90;
    secoend->Next=Third;
    Third->data=56;
    Third->Next=NULL;

    int n=96;
    atb::push(&Head,n);
    
    //Transversing through an linked list
    
    Node *temp=NULL;
    temp=Head;
    int count=0;
    while(temp!= NULL){
        
        cout<<temp->data<<" ";  
        temp=temp->Next;
        count+=1;
    }
    cout<<"\n";
    cout<<"No. of nodes are:"<<count;

    return 0;
}
