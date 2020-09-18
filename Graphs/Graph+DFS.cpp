#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//DFS from given vertex u
void DFSUtil(int u, vector<int> adj[], vector<bool> &visited, int &dest,string &path_sf)
{
    if(u == dest){cout << path_sf << " "; return;}
    
    visited[u] = true;
    for (int nbr:adj[u])
    {
        if (visited[ adj[u][nbr] ] == false){
            path_sf += to_string(u);
            DFSUtil(adj[u][nbr],adj,visited,dest,path_sf);
        }
            
    }
    visited[u] = false;
    path_sf.pop_back();
    
}

void DFS(vector<int> adj[], int V, int dest)
{
    string path_sf;
    vector<bool> visited(V,false);
    DFSUtil(0,adj,visited,dest,path_sf);
    
    
}

int main(){

    int V = 9;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,0,3);
    addEdge(adj,3,4);
    addEdge(adj,2,5);
    addEdge(adj,5,4);
    addEdge(adj,4,6);
    addEdge(adj,5,6);
    DFS(adj,V,6);

    return 0;
}

