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
     int top;
     int size;
     stack(int x){
         size=x;
         p= new char[size];
         top=-1;
     }
     void push(char b){
        p[++top]=b;
        
     }
     bool isempty(){
         if(top==-1)
         return true;
         else {
         return false;
         }
     }
     char pop(){
         return p[top--];
     }
 };

string isBalanced(string s) {
    unsigned int i;
    string res;
    char ele;bool t=true;
    
    stack st(s.length());
    for(i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
          if(s[i]=='}'||s[i]==')'||s[i]==']'){
             if(st.isempty()){
                res="NO";
                break;
                
            }
           ele=st.pop();
           //cout<<ele<<" "<<s[i];
            switch(s[i]){
                case '}':if(ele!='{'){res="NO";t=false;};break;
                case ']':if(ele!='['){res="NO";t=false;};break;
                case ')':if(ele!='('){res="NO";t=false;};break;
                }     
        }
         if(t==false)
            break;
    }//cout<<i;
    if(i==s.length()){
        if(st.top==-1){
            res="YES";
               
         }
         else {
         res="NO";
         }
        
    }
    
    return res;
}

int main(){
    string x;
    string str="{((((()))))}";
   x=isBalanced(str);
    cout<<x;
    
        
    
    return 0;
}