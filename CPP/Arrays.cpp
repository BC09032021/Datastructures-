//Deleting a number.
#include <iostream>
using namespace std;
int del(int arr[],int n,int x){
    int i=0;
    while(i<x){
        if(arr[i]==n)
            break;
        i+=1;
     }
     for(int j=i;j<x-1;j++){
         arr[j]=arr[j+1];
     }
     if(i==x)
        return x;
    return (x-1);
}
int main(){
    int n,j,m;
    cout<<"Enter no. of elements:";
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++){
       cout<<"Enter element:";
       cin>>j;
       arr[i]=j;
   }
   cin>>m;
   
   int x=del(arr,m,n);
   
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
}