#include <iostream>
#include <string>
using namespace std;
class lstack{
    public:
    char *a;
    int top;
    lstack(int x){
        a=new char[x];
        top=-1;
    }
    void push(char b){
        a[++top]=b;
    }
    char pop(){
        return a[top--];
    }
    bool empty(){
      return (top==-1);
    }
    char peek(){
        return a[top];
    }
};
int prece(char b){
    switch(b){
        case '+':
        case '-':return 5;break;
        case '*':
        case '/':return 6;break;
        default:return 3;
    }
}
int main()
{
   
    string expr="(a+b)*(c/d)";
    lstack st(expr.length());
    string p="";
    for(int i=0;i<expr.length();i++){
        //cout<<expr[i]<<" ";
        if(isalpha(expr[i])){
            p+=expr[i];
           
        }
       else if(expr[i]=='('){
            st.push(expr[i]);
        }
        else if(expr[i]==')'){
            while(st.peek() !='('){
                p+=st.pop();
            }
            st.pop();
        }
        else{
            while(prece(expr[i])<=prece(st.peek())){
                p+=st.pop();
            }
            st.push(expr[i]);
        }
       
    }
 
    if(!(st.empty())){
        while(!st.empty()){
            p+=st.pop();
        }
    }
 cout<<p;
    return 0;
}