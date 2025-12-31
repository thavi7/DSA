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

int main()
{
node*head=NULL;

    int arr[] = {2, 4, 6, 3};

   /* node *head = NULL;
    node *tail = NULL;

    for (int i = 0; i < 4; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
        else
        {

            tail->next = new node(arr[i]);
            tail = tail->next;
        }
    } */

   head= creatlinklist(arr,0,4);
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    } 

   
    return 0;
}