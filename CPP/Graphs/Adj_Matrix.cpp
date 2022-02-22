#include <iostream>
using namespace std;
int main(){
    int V,E;
    cout<<"Enter no. of vertices and edges:";
    cin>>V>>E;
    int am[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            am[i][j]=0;
        }
    }
    int u,v;
    for(int i=0;i<E;i++){
        cin>>u>>v;
        am[u][v]=1;
        am[v][u]=1;
    }
     for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
           cout<<am[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}