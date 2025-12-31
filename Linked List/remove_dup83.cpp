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

node*remove_dup(node*head)
{
    node*curr=head->next,*pre=head;
    while (curr)
    {
    
        if (curr->data==pre->data)
        {
            pre->next=curr->next;
            delete curr;
            curr=pre->next;
        }
        else{
             pre=pre->next;
        curr=curr->next;
        }
        
    }
    return head;
    
}



int main() {
    
int arr[]={2,2,2,3,3,4,4};
node*head=NULL;
head=creatlinklist(arr,0,7);

head=remove_dup(head);




node*print=head;
while (print)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}