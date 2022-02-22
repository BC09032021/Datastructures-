#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
   
};
class Hashtable{
    public:
       node **arr;
        Hashtable(int n){
            arr=new node*[n];
             for (int i = 0; i <n; ++i) {
                 *(arr+i) = NULL;
    }
        }
    void insert(int data,int n){
        int slot=data%n; node *head=NULL;
        if(*(arr+slot)==NULL){
           
            head->data=data;
            head->next=NULL;
        
        }
        else{
            node *temp=NULL;
            temp->data=data;
            temp->next=NULL;
            head->next=temp;
        }
        *(arr+slot)=head;
        
        
    }
    void display(){
         for (int i = 0; i <5; ++i) {
                 cout<<(*(arr+i))->data<<" ";
    }
    }
};
int main(){
    
    Hashtable ht(5);
    ht.insert(10,5);
    ht.insert(10,5);
    ht.insert(10,5);
    ht.insert(10,5);
    ht.display();
    
    return 0;
    
    
}