#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void permut(vector<int>&arr,vector<vector<int>>&ans,int index)
{
  if (index==arr.size())
  {
   ans.push_back(arr);
   return;
  }
  vector<bool>use(21,0);
  for (int i = index; i < arr.size(); i++)
  {
   if (use[arr[i]+10]==0)
   {
    swap(arr[i],arr[index]);
    permut(arr,ans,index+1);
    swap(arr[i],arr[index]);
    use[arr[i]+10]=1;
   }
   
  }
  
}
int way(int arr[],int n,int sum)
{
  if (sum==0) return 1;
 if(sum<0)  return 0;
 int ans=0;
 for (int i = 0; i < n; i++)
 {
   ans+= way(arr,n,sum-arr[i]);
 }
 return ans;
}
int main() {
    vector<int> arr = {1,1,2};  
    vector<vector<int>>ans;
   // permut(arr,ans,0);

    for (int i = 0; i < ans.size(); i++)
    {
       for (int j = 0; j < ans[i].size(); j++)
       {
        cout<<ans[i][j]<<" ";
       } 
       cout<<endl;
    }
    int arr1[]={1,5,6};

  cout<< way(arr1,3,7);
  
    return 0;
}