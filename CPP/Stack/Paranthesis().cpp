// For each character of input string
// If character is opening parenthesis '(', put it on stack.
// If character is closing parenthesis ')'
// Check top of stack, if it is '(' , pop and move to next character.
// If it is not '(', return false
// After scanning the entire string, check if stack is empty. If stack is empty, return true else return false.
#include <iostream>
#include <string>
using namespace std;
class stack{
  public:
  char *p;
  int max;
  int top;
  stack (int x){
      max=x;
      p=new char[x];
      top=-1;
  }
  int push(){
      p[++top]=char(40);
      return top;
  }
  bool isempty(){
      if(top==-1){
          return true;
      }
      else{
          return false;
      }
  }
  int pop(){
     return --top;
  }
};
int main(){
    stack st(10);
    int i;
    string str="(((())))";
    int top;
    for(i=0;i<str.length();i++){
        
        if(str[i]==char(40))
            top=st.push();
        if(str[i]==char(41)){
            if(st.isempty()){
                cout<<"More no. of right brackets";
                break;
                
            }
           
            else{
                top=st.pop();
            }
            
        }
        //cout<<"\nTop:"<<top<<"\n";
    }
    if(top!=-1){
        cout<<"More no. of left brackets";
    }
    //cout<<i;
    if(i==str.length()){
        if(top==-1){
            cout<<"Valid expression";
        }
    }
    
        
    
    return 0;
}