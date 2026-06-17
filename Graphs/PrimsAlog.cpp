#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int spanningTree(int v, vector<vector<int>> adj[]){
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        vector<int>visited(v, 0);
        int sum = 0;
        pq.push({0, 0});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();

            int wt = it.fist;
            int node = it.second;

            if(visited[node]) continue;
            sum += wt;
            visited[node] = 1;

            for(auto nbr : adj[node]){
                int nbrwt = nbr[1];
                int nbrnode = nbr[0];
                
                if(!visited[nbrnode]){
                    pq.push({nbrwt, nbrnode});
                }
            }
        }
        return sum;
    }

int main(){


    

}