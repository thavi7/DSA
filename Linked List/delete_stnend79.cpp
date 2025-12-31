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

int main() {
    
int arr[]={20,8,7,30};
node*head=NULL;
head=creatlinklist(arr,0,4);


//delete a node at first

if (head!=NULL)
{
  node*temp2=head;
head=head->next;
delete temp2;
}

//delete a node at last

if (head != NULL)
    {
        if (head->next == NULL)
        {
            node *temp = head;
            head = NULL;
            delete temp;
        }
        else
        {
            node *pre = NULL;
            node *curr = head;
            while (curr->next != NULL)
            {
                pre = curr;
                curr = curr->next;
            }
            pre->next = NULL;
            delete curr;
        }
    }


node*temp=head;
while (temp!=NULL)
{
    cout<<temp->data<<" ";
   temp=temp->next;
}
    return 0;
}