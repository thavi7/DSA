#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class node{
public:

    int data;
    node*next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

int longestSubarray(vector<int> arr, int k) {
        
        int n=arr.size();
      int count=0;
        for(int i=0;i<n ;i++)
        { int pre=0;
            for(int j=i;j<n;j++)
            {
                pre+=arr[j];
                if(pre==k)
                {
                  count++;
                }
            }
        }
       
            return count;
        
    }

int main() {
    vector<int>arr({1,2,3});
   
    cout<<longestSubarray(arr,3);
    return 0;
}