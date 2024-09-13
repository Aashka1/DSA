#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
void bfs (vector<int>adj[],int v,int s){
bool visited[v+1];
for(int i=0;i<v;i++){
    visited[i]=false;
}
queue<int>q;
visited[s]=true;
q.push(s);
while(q.empty()==false){
    int u=q.front();
    q.pop();
   cout<<u<<" ";
   for(int x:adj[u]){
    if(visited[x]==false){
        visited[x]=true;
        q.push(x);
    }
   }
}
}
int main() {
    // Number of vertices and starting vertex
    int v = 6; // Adjust the number of vertices as needed
    int startVertex = 0; // Adjust the starting vertex as needed

    // Create an adjacency list representation of the graph
    vector<int> adj[v];
    
    // Adding edges (adjust as needed for your specific graph)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(5);

    // Call the BFS function
    cout << "BFS starting from vertex " << startVertex << ": ";
    bfs(adj, v, startVertex);

    return 0;
}
