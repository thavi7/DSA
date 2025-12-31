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

node*deletenode(node* curr,int x)
{

    if (x==1)
    {
       node*temp=curr->next;
       delete curr;
       return temp;
    }
    curr->next=deletenode(curr->next,x-1);
    return curr;



}
int main() {
    
int arr[]={20,8,7,30};
node*head=NULL;
head=creatlinklist(arr,0,4);

/*int x = 3;
if (x==1)
{
    node*temp2=head;
head=head->next;
delete temp2;
}
else{
    node *curr = head;
    node *pre = head;
    x--;
    while (x--)
    {
        pre=curr;
    curr = curr->next;
    }
    pre->next=curr->next;
    delete curr;
   
} */
node*curr=head;
head=deletenode(curr,3);

node*temp=head;
while (temp!=NULL)
{
    cout<<temp->data<<" ";
   temp=temp->next;
}
    return 0;
}