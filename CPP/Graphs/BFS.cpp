#include <iostream>
#include <queue>
using namespace std;
class Graph{
public:
    int V,E;
    int **am;
    int *visited;
  
  Graph(int v,int e){
      this->V=v;
      this->E=e;
      visited=new int[V];
      am=new int*[V];
      for(int i=0;i<V;i++){
          am[i]=new int[V];
      }
       for(int i=0;i<V;i++){
          visited[i]=0;
      }
      
     for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            am[i][j]=0;
        }
    } 
  }
  void input(){
      cout<<"Enter the vertices which are connected by an edge:";
       int u,v;
      
    for(int i=0;i<E;i++){
        cin>>u>>v;
        am[u][v]=1;
        am[v][u]=1;
    }
  }
  void print(){
      for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
           cout<<am[i][j]<<" ";
        }
        cout<<"\n";
    }
  }
 vector <int> BFS(int si){
     vector <int> bfs;queue <int> q;
     visited[si]=1;
     q.push(si);
     while(!q.empty()){
         si=q.front();
         q.pop();
         bfs.push_back(si);
         for(int i=0;i<V;i++){
                if(am[si][i]==1&&visited[i]==0){
                    visited[i]=1;
                    q.push(i);
                }
            }
     }
     
     return bfs;
 }
};
int main(){
    cout<<"Enter no. of vertices and edges:";
    int V,E;vector <int> ans;
    cin>>V>>E;
    Graph G(V,E);
    G.input();
    G.print();
    ans=G.BFS(0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
   
     
    return 0;
}