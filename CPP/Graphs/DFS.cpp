#include <iostream>
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
void DFS(int si){
     
        visited[si]=1;
        cout<<si<<" ";
        for(int i=0;i<V;i++){
            if(am[si][i]==1&&visited[i]==0){
                DFS(i);
            }
        }
        
    }
};
int main(){
    cout<<"Enter no. of vertices and edges:";
    int V,E;vector <int> ans;
    cin>>V>>E;
    Graph G(V,E);
    G.input();
    //G.print();
    G.DFS(0);
    
    
   
     
    return 0;
}