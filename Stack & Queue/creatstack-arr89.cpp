#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class stack
{
public:
    int *arr;
    int size;
    int top;

public:
    bool flag;
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag=1;
    }

    // push
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"pushed "<<arr[top]<<" into the stack"<<endl;
            flag=0;
        }
    }

    // pop
    void pop()
    {
        if (top == -1)
        {
            cout << "stack Underflow" << endl;
            return;
        }
        else
        {
             cout<<"Poped "<<arr[top]<<" into the stack"<<endl;
            top--;
            if(top==-1)
            {
                flag=1;
            }
        }
    }

    // peek
    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // isempty
    bool isempty()
    {
        return top == -1;
    }

    // issize
    int issize()
    {
        return top + 1;
    }
};

int main()
{
 stack s(5);
 s.push(-1);
 int value=s.peek();
 if (s.flag==0)
 {
    cout<<value<<endl;
 }
 
    return 0;
}