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




node*sort(node*head)

{
    int count0=0,count1=0,count2=0;
    node*curr=head;
    while (curr)
    {
        if (curr->data==0)
        {
            count0++;
        }
        else if (curr->data==1)
        {
            count1++;
        }
        else{
               count2++;
        
        }
        curr=curr->next;
    }
    curr=head;
    while (count0--)
    {
        curr->data=0;
        curr=curr->next;
    }
    while (count1--)
    {
        curr->data=1;
        curr=curr->next;
    }
    while (count2--)
    {
        curr->data=2;
        curr=curr->next;
    }
    return head;
}

node*sort1(node*head)
{
    node*head0=new node(0),*head1=new node(0),*head2=new node(0),*curr=head,*temp=head;
    node*temp0=head0,*temp1=head1,*temp2=head2;
    while (curr)
    {
       if (curr->data==0)
       {
        temp0->next=temp;
        temp0=temp0->next;
        temp->next=NULL;
       }
      else if (curr->data==1)
       {
        temp1->next=temp;
        temp1=temp1->next;
        temp->next=NULL;
       }
       else{
        
        temp2->next=temp;
        temp2=temp2->next;
        temp->next=NULL;
       
       }
       
    }
    temp0=head0,temp1=head1,temp2=head2;
    head0=head0->next;
    delete temp0;
    head1=head1->next;
    delete temp1;
    head2=head2->next;
    delete temp2;
    node*h0=head0,*h1=head1,*h2=head2;
    while (h0)
    {
        h0=h0->next;
    }
    
    while (h1)
    {
        h1=h1->next;
    }
    h0->next=head1;
    h1->next=head2;
    return head0;
    
}

int main() {
    
int arr[]={0,1,0,2,2,0,1};
node*head=NULL;
head=creatlinklist(arr,0,7);

//head=sort(head);
head=sort1(head);

node*print=head;
while (print)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}