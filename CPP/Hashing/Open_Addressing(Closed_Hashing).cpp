#include <iostream>
using namespace std;
class Hash{
public:
  int *Harr;
  int size;int count;
  Hash(int n){
      size=n;
      count=0;
      Harr=new int[size];
     for(int i=0;i<n;i++){
         Harr[i]=-1;
     }
  }
  int hash(int x){
      return x%size;
  }
  void insert(int data){
    int i=hash(data);
    if(count==size){
        return;
    }
    int j=1;
    while(Harr[i]!=-1 && Harr[i]!=data){
        
        i=(i+j*j)%size;
    }
    j=0;
    //cout<<"Index:"<<i<<"\n";
    if(Harr[i]==data){
        cout<<"The element is already present in the hashtable\n";
    }
    else{
        Harr[i]=data;
        count+=1;
    }
  }
  void display(){
      for(int i=0;i<size;i++){
          cout<<Harr[i]<<" ";
      }
  }

  
};
int main(){
    Hash h(7);
    h.insert(56);
    h.insert(55);
    h.insert(46);
    h.insert(49);
    h.insert(54);
    h.insert(48);
    h.insert(51);
    h.display();
    h.insert(75);
    return 0;
}