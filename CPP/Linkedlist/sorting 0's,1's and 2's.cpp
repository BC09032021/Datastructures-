#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Sll
{
public:
    
    int count()
    {
        Node *p;
        int count = 0;
        for (p = head; p != NULL; p = p->next)
        {
            count++;
        }
        return count;
    }
     void push(int newData)
    {
        Node *newNodePush = new Node();
        newNodePush->data = newData;
        newNodePush->next = head;
        head = newNodePush;
    }
      void printList()
    {
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
    void sort(Sll a){
        Node *p=a.head,*q=a.head;
        int count0=0,count1=0,count2=0;
        while(p!=NULL){
            if(p->data==0){
                count0++;
            }
            else if(p->data==1){
                count1++;
            }
            else if(p->data==2){
                count2++;
            }
            p=p->next;
        }
        for(int i=0;i<count0;i++){
            q->data=0;q=q->next;
        }
         for(int i=count0;i<count0+count1;i++){
            q->data=1;q=q->next;
        }
         for(int i=count1+count0;i<count();i++){
            q->data=2;q=q->next;
        }
        
    }


private:
    Node *head = NULL;
    int data;
};
int main()
{
    Sll obj;
    int n;
    obj.push(1);
    obj.push(0);
    obj.push(2);
    obj.push(1);
    obj.push(0);
    obj.push(2);
    obj.push(1);
    obj.push(0);
    obj.push(2);
    obj.push(1);
    obj.push(0);
    cout<<"Initial list:";
   obj.printList();
   obj.sort(obj);
   cout<<"\n";
   cout<<"Final list after sorting is:";
   obj.printList();
   return 0;
}

