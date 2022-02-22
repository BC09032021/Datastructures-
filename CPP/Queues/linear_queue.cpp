//queue-->FIFO
/*Problem with the implementation of queue using array is,we can not use the space avaliable after dequeuing as front moves to next index,if we want to use 
that space also we need to move all the elements to the left so to have space at the end but if has a TC of O(n) so to reduce the time for dequeuing we implement
queues using circular arrays*/
#include <iostream>
using namespace std;
class queue{
public:
  int *arr;
  int front,rear,size;
  queue(int x){
      arr=new int[x];
      size=x;
      front=rear=-1;
      
  }
  void enqueue(int x){
      if(rear==size-1){
          cout<<"Overflow";
          
      }
      else if(front==-1){
          arr[++rear]=x;
          front++;
      }
      else{
          arr[++rear]=x;
      }
      return;
  }
  void dis(){
      for(int i=front;i<=rear;i++){
          cout<<arr[i]<<" ";
      }
      cout<<"\n";
  }
  int dequeue(){
      if(rear==-1)
      {
        cout<<"underflow";
        return -1;
      } 
    else{
        int res=arr[front];
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
            
        }
        return res;
    }
  }
  int get_front(){
      return arr[front];
      
  }
  int get_rear(){
      return arr[rear];
      
  }
  bool is_full(){
      if(rear==size-1)
            return true;
    return false;
  }
  bool is_empty(){
      if(front==-1){
          return true;
      }
      return false;
  }
};
int main(){
    queue s(5);
    for(int i=1;i<6;i++)
        s.enqueue(i);
    s.dis();
    cout<<"Deleted element is:"<<s.dequeue()<<"\n";
    cout<<"Deleted element is:"<<s.dequeue()<<"\n";
    cout<<"Front:"<<s.get_front()<<"\n";
    cout<<"rear:"<<s.get_rear()<<"\n";
    cout<<s.is_full();
    
    
    
    return 0;
}