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
    node*pre;
    node(int value)
    {
        data=value;
        pre=NULL;
        next=NULL;
    }
};

node*creatdll(int arr[],int i, int n, node*back)
{
    if (i==n)
    {
        return NULL;
    }
    node*temp=new node(arr[i]);
    temp->pre=back;
    temp->next=creatdll(arr,i+1,n,temp);
    return temp;
}


node*delete_dll(node*head,int x)
{
    node*curr=head;
   

    while (--x)
    {
        curr=curr->next;
    }
    if (curr->next==NULL)
    {
        curr->pre->next=NULL;
        delete curr;
    }
    else{
    curr->pre->next=curr->next;
    curr->next->pre=curr->pre;
    delete curr;
    return head;
    }
}

int main() {
    
    int arr[]={1,2,3,4,5};
    node*head=NULL;
    head=creatdll(arr,0,5,NULL);

head=delete_dll(head,4);
        node*print=head;
while (print!=NULL)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}