#include<iostream>
#include<map>
#include<list>

using namespace std;

class Graph{
    
    map<int, list<int>>adj;
    public:
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

int main(){

    Graph G;

    G.addEdge(12,15);
    G.addEdge(15,60);
    G.addEdge(60,40);
    G.addEdge(40,12);

    G.printGraph();
    

    return 0;
}

