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
        if(top==-1){
            return true;
        }
        else
        return false;
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
   
    string expr="a+b/g*f+t-i+u";
    lstack PRESTK(expr.length());
    lstack S(expr.length());
    string p="";
    for(int i=expr.length()-1;i>=0;i--){
        if(isalpha(expr[i])){
            PRESTK.push(expr[i]);
        }
        else{
            if(S.empty()){
                S.push(expr[i]);
            }
            else if(prece(expr[i])< prece(S.peek())){
                while(prece(expr[i])<prece(S.peek())){
                    PRESTK.push(S.pop());
                }
                S.push(expr[i]);
                
            }
            else
                S.push(expr[i]);
             
        }
    }
    while(!S.empty()){
        PRESTK.push(S.pop());
    }
    while(!PRESTK.empty()){
        cout<<PRESTK.pop();
    }
    
    return 0;
}
    