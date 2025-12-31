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

bool pali(node*head)
{
    if (head->next==NULL)
    {
        return NULL;
    }
    
   node*temp=head,*curr=head,*pre=NULL;
   int count=0;
   while (temp)
   { 
    count++;
    temp=temp->next;
   }
   count/=2;
   while (count--)
   {
    pre=curr;
    curr=curr->next;
   }
   pre->next=NULL;
   curr=reverse(curr);

   node*head1=head;
   node*head2=curr;
   
   while (head1)
   {
    if (head1->data!=head2->data)
    {
        return 0;
    }
    head1=head1->next;
    head2=head2->next;
    
   }

   return 1;
   
}

int main() {
    
int arr[]={1,2,3,3,2,1};
node*head=NULL;
head=creatlinklist(arr,0,6);
cout<<pali(head);

    return 0;
}