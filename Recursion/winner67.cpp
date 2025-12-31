#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int winner(vector<bool>&person,int i,int n,int person_left, int k)
{
  if (person_left==1)
  {
   for (int i = 0; i < n; i++)
   {
   if (person[i]==0)   return i;
   }   
  }
  
    int kill=(k-1)%person_left;
    while (kill>0)
    {
       i=(i+1)%n;
       while (person[i]==1)
       {
        i=(i+1)%n;
       }
       kill--; 
    }
    person[i]=1;
  while (person[i]==1)
  {
   i=(i+1)%n;
  } 
  
  return  winner(person, i, n,person_left-1, k);
    
}

int winner1(int n,int k)
{
    if (n==1)
    {
        return 0;
    }
    return (winner1(n-1,k) +k)%n;
}
int main() {
    vector<bool>person(5,0);
   cout<<winner(person,0,5,5,3);
   cout<<winner1(5,3);
    return 0;
}