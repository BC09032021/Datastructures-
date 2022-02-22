
#include <iostream>

using namespace std;

bool pal(string s,int st,int end)
{ 
    if(st>=end)
    return true;
    return (s[st]==s[end]&& pal(s,st+1,end-1));
    
}

int main()
{
    string s;
    cin>>s;
   bool x=pal(s,0,s.length()-1);
   cout<<x;
    
    return 0;
}
