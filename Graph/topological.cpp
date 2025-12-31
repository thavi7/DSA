#include<bits/stdc++.h> 
using namespace std;

class Solution {
  public:
  
  void DFS(int node,vector<vector<int>>& adj,vector<bool>&visited, stack<int>&s)
  {
      visited[node]=true;
      for(int j=0;j<adj[node].size();j++)
      {
          if(!visited[adj[node][j]]) 
          DFS(adj[node][j],adj,visited,s);
      }
      
      s.push(node);
  }
  
    vector<int> topoSort(int V, vector<vector<int>>& adj) {
        // code here
        vector<bool>visited(V,false);
        stack<int>s;
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
             DFS(i,adj,visited,s);
        }
        vector<int>ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
       return ans;
    }
};