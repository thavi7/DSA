#include<bits/stdc++.h> 
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

class Queue{
 node*front;
 node*rear;
 public:
 Queue()
 {
    front=NULL;
    rear=NULL;
 }
 bool isempty()
 {
    return front==NULL;
 }
 void push(int x)
 {
    if (isempty())
    {
        front=rear=new node(x);
        cout<<"pushed "<<x<<" into the queue"<<endl;
        return;
    }
    else{
        rear->next=new node(x);
        if (rear->next==NULL)
        {
           cout<<"queue overload"<<endl;
        }
        
        rear=rear->next;
        cout<<"pushed "<<x<<" into the queue"<<endl;
    }
 }
 void pop()
 {
    if (isempty())
    {
        cout<<"queue Underflow"<<endl;
        return;
    }
    else{
        cout<<"poped "<<front->data<<" into the queue"<<endl;
        node*temp=front;
        front=front->next;
        delete temp;       
    }  
 }

 int start()
 {
    if (isempty())
    {
        cout<<"queue is empty"<<endl;
        return -1;
    }
    else{
        return front->data;
    }
    
 }
};
int main() {
Queue q;
q.push(5);
q.push(10);
q.push(8);
q.push(88);
q.pop();
cout<<q.start();
    return 0;
}