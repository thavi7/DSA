#include<bits/stdc++.h> 
using namespace std;

//directed weighted
int main() {
    int vertex,edges;
    cin>>vertex>>edges;

        vector<vector<int>>Adjmat(vertex,vector<int>(vertex,0));
    
    int u,v,weight;
    for (int i = 0; i < edges; i++)
    {
       cin>>u>>v>>weight; 
       Adjmat[u][v]=weight;
       //Adjmat[v][u]=weight;
    }
    
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout<<Adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}