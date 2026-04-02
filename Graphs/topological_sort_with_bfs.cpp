#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class graph{
    public:
    vector<vector<int>>edges;
    graph(int n){
        edges.resize(n);
    }

    void addEdge(int u, int v){
        edges[u].push_back(v);
    }

    void printGraph(){
        for(int i = 0; i < edges.size(); i++){
            cout<<i<<" -> ";
            for(int j = 0; j < edges[i].size(); j++){
                cout<<edges[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

vector<int>topologicalSort(vector<vector<int>>& graph){
    int n = graph.size();
    vector<int>sortedGraph;
    vector<int>indegree(n);

    for(int i = 0; i < n; i++){
        for(auto it : graph[i]){
            indegree[it]++;
        }
    }

    queue<int>q;

    for(int i = 0; i < n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int temp = q.front();
        sortedGraph.push_back(temp);
        q.pop();
        for(auto nbr : graph[temp]){
            indegree[nbr]--;

            if(indegree[nbr] == 0){
                q.push(nbr);
            }
        }
    }
    return sortedGraph;
}


int main(){
    graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,1);

    g.printGraph();


    cout<<"\nTOPOLOGICAL SORT OF THIS GRAPH\n";

    vector<int>ans = topologicalSort(g.edges);

    if(ans.size() != g.edges.size()){
        cout<<"Circle in the graph. ";
    }

    else{
        for(int i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
        }
    }
    
    return 0;
}