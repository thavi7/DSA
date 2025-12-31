#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void permut(int arr[],  vector<vector<int>>&ans,   vector<int>&temp,   vector<bool>&visited)
{
  if (visited.size()==temp.size())
  {
   ans.push_back(temp);
   return;
  }
  

for (int i = 0; i < visited.size(); i++)
{
    if(visited[i]==0)
    {
        visited[i]=1;
        temp.push_back(arr[i]);
        permut(arr,ans,temp,visited);
        visited[i]=0;
        temp.pop_back();
    }

}
}
void permutswap(vector<int>&arr,vector<vector<int>>&ans,int index)
{
  if (index==arr.size())
  {
   ans.push_back(arr);
   return;
  }
  for (int i = index; i < arr.size(); i++)
  {
  
    swap(arr[i],arr[index]);
    permutswap(arr,ans,index+1);
    swap(arr[i],arr[index]);  
  }  
}
int main() {
    int arr[]={1,2,3};
    vector<int>arr1={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    vector<bool>visited(3,0);
  //  permut(arr,ans,temp,visited);
    permutswap(arr1,ans,0);

    for (int i = 0; i < ans.size(); i++)
    {
       for (int j = 0; j < ans[i].size(); j++)
       {
        cout<<ans[i][j]<<" ";
       } 
       cout<<endl;
    }
    
    return 0;
}