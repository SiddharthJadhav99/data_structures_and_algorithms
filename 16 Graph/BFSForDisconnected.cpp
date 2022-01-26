#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[], int s, bool visited[]){
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void BFSDiscon(vector<int> adj[], int v){
    bool visited[v+1];
    for(int i = 0; i < v; i++){
        visited[i] = false;
    }
    int count = 0; //this return the count of disconnected graphs.
    for(int i = 0; i < v; i++){
        if(visited == false){
            count++;
            BFS(adj, i, visited);
        }
    }
}