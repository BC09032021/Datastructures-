//Adj. Matrix
#include <iostream>
using namespace std;
int main(){
    int V,E;
    cin>>V>>E;
    int am[V][V];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            am[i][j]=0;
        }
    }
    int u,v;
    for(int i=0;i<E;i++){
        cin>>u>>v;
    }
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(am[i][j]==1){
                cout<<i<<"-->"<<j;
            }
        }
    }
    return 0;
}