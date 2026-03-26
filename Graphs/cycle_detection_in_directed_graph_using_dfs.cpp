#include<iostream>
#include<vector>

using namespace std;

class Graph{
    public:
    vector<vector<int>>graph;

    Graph(int n){
        graph.resize(n+1);
    }
    
    void addEdge(int u, int v){
        graph[u].push_back(v);
        // graph[v].push_back(u);
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

bool dfs_dCycle(int node, vector<int>&visited, vector<int>&cp, vector<vector<int>>&graph){
    visited[node] = 1;
    cp[node] = 1;

    for(auto nbr : graph[node]){
        if(!visited[nbr]){
            if(dfs_dCycle(nbr, visited, cp, graph)){
                return true;
            }
        }
        else if(cp[nbr] == 1){
            return true;
        }
    }
    cp[node] = 0;
    return false;
}

int main(){

    Graph G(5);
    G.addEdge(1,2);
    G.addEdge(2,3);
    G.addEdge(3,4);
    G.addEdge(4,5);

    G.printGraph();

    vector<vector<int>>adj = G.graph;
    int n = adj.size();
    vector<int>visited(n, 0);
    vector<int>curr_path(n, 0);

    bool ans = dfs_dCycle(1, visited, curr_path, adj);

    cout<<"\n"<<ans;

    return 0;
}