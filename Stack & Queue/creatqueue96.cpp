#include <bits/stdc++.h> 
using namespace std;

class Queue
{
    int *arr;
    int front,rear,size;
    public:
    Queue(int n)
    {
        arr=new int[n];
        size=n;
        front=-1,rear=-1;

    }

    bool isempty()
    {
       return front==-1;
        
    }

    bool isfull()
    {
        return (rear+1)%size==front;
    }
    void push(int x)
    {
        if (isempty())
        {
            cout<<"pushed "<<x<<" into the queue"<<endl;
            front=0;
            rear=0;
            arr[0]=x;
        }
        else if (isfull())
        {
            cout<<"queue Overflow"<<endl;
            return;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
              cout<<"pushed "<<x<<" into the queue"<<endl;
        }
    }

    void pop()
    {
        if (isempty())
        {
           cout<<"queue Underflow"<<endl;
           return ;
        }
        else 
        {
            if(rear==front)
            {
                  cout<<"poped "<<arr[front]<<" into the queue"<<endl;
                front=-1;
                rear=-1;
            }
            else{
                  cout<<"poped "<<arr[front]<<" into the queue"<<endl;
                front=(front+1)%size;
            }
        }
    }
    int start(){
        if(isempty())
        {
            return -1;
        }
        else{
            return arr[front];
        }
    }




};


int main() {
    
   Queue q(5);

    q.push(5);
    q.push(10);
    q.push(15);
    q.pop();
   q.push(20);
   q.pop();
   q.push(25);
     cout<<q.start()<<endl;;
   q.pop();
   q.pop();


   

    
    return 0;
}