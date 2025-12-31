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
node*mid(node*head)
{
    int count=0;
    node*temp=head;
    while (temp)
    {
        count++;
        temp=temp->next;
    }
    count /= 2;
    temp=head;
    while (count--)
    {
        temp=temp->next;
    }
    return temp;
    
}

node*mid1(node*head)
{
    node*slow=head,*fast=head;
    while (fast&&fast->next)
    {
       slow=slow->next;
       fast=fast->next->next;
    }
    return slow;
    
}
node*rotate(node*head,int k)
{
  node*temp=head,*curr=head,*pre=NULL;
  int count=1;
  while (temp->next!=NULL)
  {
    count++;
    temp=temp->next;
  }
  temp->next=head;
  k%=count;
  if (k==0)
  {
    return head;
  }
  
  count -=k;
  while (count--)
  {
    pre=curr;
    curr=curr->next;
  }
  pre->next=NULL;
  head=curr;

  return head;
  
  
}

int main() {
    
int arr[]={10,20,30,40,50};
node*head=NULL;
head=creatlinklist(arr,0,5);



cout<<endl;

//cout<<mid(head);
//cout<<mid1(head);

head=rotate(head,2);

node*temp=head;
while (temp!=NULL)
{
    cout<<temp->data<<" ";
   temp=temp->next;
}
    return 0;
}