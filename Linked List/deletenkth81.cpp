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

node*nth_del(node*head,int x)
{


    node*temp=head,*curr=head,*pre=NULL;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    count=count-x;
    if (count==0)
    {
        temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    
  
    while (count--)
    {
        pre=curr;
        curr=curr->next;
       
    }
    pre->next=curr->next;
    delete curr;
    return head;
}


node*kth_del(node*head,int k)
{
    node*curr=head,*pre=NULL;
    int count=1;
    if (k==1)
    {
        return NULL;
    }
    
    while (curr)
    {
        if (k==count)
        {
            pre->next=curr->next;
            delete curr;
            curr=pre->next;
            count=1;
        }
        else{
            pre=curr;
            curr=curr->next;
            count++;
        }
        
    }
    return head;
    
    
}

int main() {
    
int arr[]={1,2,3,4,5,6,7,8,9,10};
node*head=NULL;
head=creatlinklist(arr,0,10);

//head=nth_del(head,8);
head=kth_del(head,3);



node*print=head;
while (print)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}