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

node*creatlinklist(int arr[],int i,int n)
{
    if (i==n)
    {
        return NULL;
    }
    node*temp=new node(arr[i]);
    temp->next=creatlinklist(arr,i+1,n);
    return temp;
    
}


node*reversedata(node*head)
{
    vector<int>ans;
node*temp=head;
while (temp)
{
    ans.push_back(temp->data);
    temp=temp->next;
}
int i=ans.size()-1;
temp=head;
while (temp)
{
    temp->data=ans[i];
    temp=temp->next;
    i--;
}
 return head;
}

node*reverse(node*head)
{
    node*pre=NULL;
    node*curr=head;
    node*fut=NULL;
    while (curr)
    {
        fut=curr->next;
        curr->next=pre;
        pre=curr;
        curr=fut;
        
    }
    return pre;
}

node*rec_rev(node*curr,node*pre)
{
    if (curr==NULL)
    {
       return pre;
    }
    node*fut=curr->next;
    curr->next=pre;
    rec_rev(fut,curr);
}


int main() {
    
int arr[]={20,8,7,30};
node*head=NULL;
head=creatlinklist(arr,0,4);

//reverse


//head=reversedata(head);
//head=reverse(head);
//head=rec_rev(head,NULL);




node*print=head;
while (print)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}


