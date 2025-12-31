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

node*rev(node*curr,node*pre)
{
    if (curr==NULL)
    {
       return pre;
    }
    node*fut=curr->next;
    curr->next=pre;
  return  rev(fut,curr);
}


int main() {
    
int arr1[]={9,7,6,8,4};
int arr2[]={6,4,3,8};
node*first=NULL,*second=NULL;
first=creatlinklist(arr1,0,5);
second=creatlinklist(arr2,0,4);

first=rev(first,NULL);
second=rev(second,NULL);

node*curr1=first,*curr2=second;
node*head=new node(0);
node*tail=head;
int carry=0;
while(curr1 && curr2)
{
    int sum=curr1->data+curr2->data+carry;
    tail->next=new node(sum%10);
    carry=sum/10;
    curr1=curr1->next;
    curr2=curr2->next;
    tail=tail->next;
}
while(curr1)
{
    int sum=curr1->data+carry;
    tail->next=new node(sum%10);
    carry=sum/10;
    curr1=curr1->next;
    tail=tail->next;
}
while(curr2)
{
    int sum=curr2->data+carry;
    tail->next=new node(sum%10);
    carry=sum/10;
    curr2=curr2->next;
    tail=tail->next;
}
while (carry)
{
   tail->next=new node(carry%10);
   carry /= 10;
}

head=rev(head->next,NULL);


node*print=head;
while (print)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}
