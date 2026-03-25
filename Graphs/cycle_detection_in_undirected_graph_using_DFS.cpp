#include<iostream>
#include<vector>

using namespace std;

using namespace std;
class Graph{
    public:
    vector<vector<int>>graph;

    Graph(int n){
        graph.resize(n+1);
    }
    
    void addEdge(int u, int v){
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    void printGraph(){
        for(int i = 1; i < graph.size(); i++){ 
            cout<<i<<" -> ";
            for(auto it : graph[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }  
};


bool dfs_cycle(int node, int parent, vector<vector<int>>&graph, vector<bool>&visited){

    visited[node] = 1;

    for(auto nbr : graph[node]){
        if(!visited[nbr]){
            if(dfs_cycle(nbr, node, graph, visited)){
                return true;
            }
        }
        else if(nbr != parent){
            return true;
        }
    }
    return false;
}

int main(){

    Graph G(4);
    G.addEdge(1,2);
    G.addEdge(1,3);
    G.addEdge(2,4);
    G.addEdge(3,4);

    G.printGraph();

    vector<vector<int>>adj = G.graph;
    int n = adj.size();
    vector<bool>visited(n, 0);

    bool ans = dfs_cycle(1, -1, adj, visited);

    cout<<"\n"<<ans;

    return 0;
}