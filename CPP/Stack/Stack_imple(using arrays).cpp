#include <iostream>
using namespace std;
class Stack{
    public:
    int arr[5];
    int top=-1;
int push(int x){
    if(top==4)
    cout<<"Stack is overflown.";
    else{
        arr[++top]=x;
    }
    return top;
}
void display(){
    if(top==-1)
        cout<<"underflow";
    else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
    }
}
int pop(){
    return arr[top--];//returns the element and the removes it.
}
int peek(){
    cout<<"\nThe top element in the stack is:";
    return arr[top];
}
void size(){
    cout<<"\nThe stack is of length:"<<top+1;
}
};
int main(){
    cout<<"Enter 5 elements:";
    int x,top,element;
    
    Stack arr;
    for(int i=0;i<5;i++){
        cin>>x;
        top=arr.push(x);
    }
    arr.display();
    element=arr.peek();
    cout<<element;
    element=arr.pop();
    cout<<"\nThe element poped out is:"<<element;
    element=arr.peek();
    cout<<element;
    arr.size();
    

    return 0;
}