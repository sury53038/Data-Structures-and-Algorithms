#include<bits/stdc++.h>

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

void BFS(map<int, list<int>>adj, int src){
    queue<int>que;
    map<int, bool>visited;

    que.push(src);
    visited[src] = true;


    while(!que.empty()){
        int temp = que.front();
        que.pop();
        cout<<temp<<" ";

        for(auto neig : adj[temp]){
            if(visited[neig]==false){
                que.push(neig);
                visited[neig] = true;
            }
        }
    }   
}


int main(){

    Graph G;

    G.addEdge(12,15);
    G.addEdge(15,60);
    G.addEdge(60,40);
    G.addEdge(40,12);

    G.printGraph();
    cout<<"Now, BFS"<<endl;
    BFS(G.adj, 60);

    return 0;
}

