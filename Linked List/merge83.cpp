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

node*merge(node*head1,node*head2)
{
   node*head=new node(0),*tail=head;
   while (head1 && head2)
   {
    if (head1->data<=head2->data)
    {
        tail->next=head1;
        head1=head1->next;
        tail=tail->next;
        tail->next=NULL;
    }
    else{
        tail->next=head2;
        head2=head2->next;
        tail=tail->next;
        tail->next=NULL;
    }
    
   }
   if (head1)
   {
    tail->next=head1;
   }
   else{
    tail->next=head2;
   }
   tail=head;
   head=head->next;
   delete tail;

   return head;
}


int main() {
    
int arr1[]={2,4,5,7};
int arr2[]={3,4,4,6,8,10};
node*head1=NULL,*head2=NULL,*head=NULL;
head1=creatlinklist(arr1,0,4);
head2=creatlinklist(arr2,0,6);

head=merge(head1,head2);




node*print=head;
while (print)
{
    cout<<print->data<<" ";
   print=print->next;
}
    return 0;
}