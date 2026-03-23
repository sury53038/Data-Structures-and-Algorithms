#include<iostream>
#include<list>
#include<map>

using namespace std;

class Graph{
    public:
        map<int, list<int>>adj;
        
        void addEdge(int u, int v){
            adj[u].push_back(v);
            // adj[v].push_back(u);
        }

        void printGraph(){
            for(auto it : adj){
                cout<<it.first<<" -> ";
                for(auto neig : it.second){
                    cout<<neig<<" ";
                }
                cout<<endl;
            }
            
        }
};


void DFS(int node, map<int, list<int>>&graph, map<int, bool>&visited){
    cout<<node<<" ";
    visited[node] = true;

    for(auto nbr : graph[node]){
        if(!visited[nbr]){
            DFS(nbr, graph, visited);
        }
    }
}


int main(){

    Graph G;

    G.addEdge(12,15);
    G.addEdge(15,60);
    G.addEdge(60,40);
    G.addEdge(40,12);


    G.addEdge(200,46);
    G.addEdge(200,66);

    G.printGraph();
    
    cout<<endl;

    map<int, bool>mpp;

    for(auto it : G.adj){
        if(!mpp[it.first]){
            DFS(it.first, G.adj, mpp);
        }
    }



    return 0;
}


