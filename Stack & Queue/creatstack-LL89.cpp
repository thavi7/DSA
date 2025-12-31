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

class stack{

    node*top;
    int size;
    public:
    stack(){
        top=NULL;
        size=0;
    }

    //push
    void push(int value)
    {
        node*temp=new node(value);
        if (temp==NULL)
        {
            cout<<"stack Overflow"<<endl;
            return;
        }
        else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"Pushed "<<top->data<<" from stack"<<endl;

        }
    }

    //pop
    void pop()
    {
        if (top==NULL)
        {
            cout<<"stack Underflow"<<endl;
            return;
        }
        else{
            node*temp=top;
            cout<<"popped "<<top->data<<" from stack"<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if (top==NULL)
        {
            cout<<"stack is empty"<<endl;
           return -1;
        }
        else{
            return top->data;
        }
        
    }
    

    //isempty
    bool isempty()

    {
        return top==NULL;
    }

    //issize
    int issize()
    {
        return size;
    }

};




int main() {
    
stack s;

s.push(6);
s.push(4);
s.push(69);
s.pop();

cout<<s.issize()<<endl;
cout<<s.peek()<<endl;


    return 0;
}