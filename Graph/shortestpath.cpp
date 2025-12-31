
#include<bits/stdc++.h> 
using namespace std;

class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& arr, int src) {
        // code here
     
     
     int n=arr.size();
        
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            adj[arr[i][0]].push_back(arr[i][1]);
            adj[arr[i][1]].push_back(arr[i][0]);
        }
        
        vector<int>dis(n,-1);
        vector<bool>visited(n,0);
        
        queue<int>q;
        q.push(src);
        dis[src]=0;
        visited[src]=1;
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            for(int j=0;j<adj[node].size();j++)
            {
                if(visited[adj[node][j]]) continue;
                
                
                q.push(adj[node][j]);
                visited[adj[node][j]]=1;
                dis[adj[node][j]]=dis[node]+1;
                
            }
        }
        return dis;
    }
};

int main() {
    
    return 0;
}

