#include <iostream>
#include <vector>
using namespace std;
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (int j=0;j<adj[v].size();j++)
            cout << "-> " << adj[v][j];
        printf("\n");
    }
}
int main(){
    int V,E;
    cout<<"Enter no. of vertices and edges:";
    cin>>V>>E;
   vector <int> al[V]; //array of vectors
   int u,v;
   for(int i=0;i<E;i++){
       cin>>u>>v;
       al[u].push_back(v);
       al[v].push_back(u);
   }
   printGraph(al,V);
    return 0;
}