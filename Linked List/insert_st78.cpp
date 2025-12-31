#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
node*creatlinklist(int arr[], int i, int n, node*pre)
{
    if (i==n)
    {
       return pre;
    }
    node*temp=new node(arr[i]);
    temp->next=pre;
    creatlinklist(arr,i+1,n,temp);
    
}

int main()
{

 /*
    // creat a node
    node *head;
    head=NULL;
   head= new node(28);
    cout<<head->data<<endl;
    cout<<head->next<<endl;
    // inseart a node

    if (head == NULL)
    {
        head = new node(28);
    }
    else
    {
        node *temp;
        temp = new node(28);
        temp->next = head;
        head = temp;

    }
    cout<<head->data<<endl;
    cout<<head->next<<endl;  */
   
     int arr[]={2,4,6,3};
     node *head=NULL;


    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
    {
        head = new node(arr[i]);
    }
    else
    {
        node *temp;
        temp = new node(arr[i]);
        temp->next = head;
        head = temp;

    }
    }
   //head=creatlinklist(arr,0,4,0);
    
    node*temp=head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    


    return 0;
}