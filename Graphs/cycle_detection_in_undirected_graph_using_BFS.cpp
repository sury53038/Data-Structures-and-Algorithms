#include<iostream>
#include<vector>
#include<queue>

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

bool bfs_cycle(int node, vector<vector<int>>&graph, vector<int>&parent){
    queue<int>q;
    int  N = graph.size() + 1;
    vector<int>visited(graph.size(), 0);

    q.push(node);
    visited[node] = 1;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        
        for(auto nbr : graph[temp]){
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr] = 1;
                parent[nbr] = temp;
            }
            else if(parent[temp] != nbr){
                return true;
            }
        }
    }
    return false;    
}

int main(){

    Graph G(5);
    G.addEdge(1,2);
    G.addEdge(1,3);
    G.addEdge(2,4);
    G.addEdge(3,5);
    G.addEdge(4,5);

    G.printGraph();

    vector<vector<int>>adj = G.graph;
    int n = adj.size();
    vector<int>parent(n, -1);

    bool ans = bfs_cycle(1, adj, parent);

    cout<<"\n"<<ans;

    return 0;
}