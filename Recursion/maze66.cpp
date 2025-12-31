#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool valid(int i,int j,int n)
{
    return i>=0 && j>=0 && i<n && j<n;
}
void total(vector<vector<int>>&matrix,int i,int j,int n,string path,vector<string>&ans,vector<vector<bool>>&visited)
{
    if (i==n-1 && j==n-1)
    {
       ans.push_back(path);
       return;
    }
    visited[i][j]=1;

    int row[]={-1,1,0,0};
    int col[]={0,0,-1,1};
    string dir= "UDLR";
    
    for (int k = 0; k < 4; k++)
    {
        if (valid(i+row[k],j+col[k],n) && matrix[i+row[k]] [j+col[k]] && !visited[i+row[k]] [j+col[k]])
        {
           path.push_back(dir[k]);
           total(matrix,i+row[k],j+col[k],n,path,ans,visited);
           path.pop_back();
        }        
    }
    visited[i][j]=0;
}
int main() {
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };
    string path;
    vector<string>ans;
    vector<vector<bool>> visited = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    total(matrix,0,0,4,path,ans,visited);
    for (const string& s : ans) {
        cout << s << endl;
    }
    
    return 0;
}