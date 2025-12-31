#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void subseq(int arr[],int i,int n,vector<vector<int>>&ans,vector<int>temp)
{
    if(i==n)
    {
        ans.push_back(temp);
        return;
    }
    subseq(arr,i+1,n,ans,temp);  //no
    temp.push_back(arr[i]);
    subseq(arr,i+1,n,ans,temp);  //yes

}
int main() {
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    subseq(arr,0,3,ans,temp);
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