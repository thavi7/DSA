#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
int main()
{
    queue<node*>q;
    int x,first,second;
    cout<<"enter the root element"<<endl;
    cin>>x;
    node*root=new node(x);
    q.push(root);
    while (!q.empty())
    {
        node*temp=q.front();
        q.pop();

        //leftchild
        cout<<"enter the leftchild of "<<temp->data<<endl;
        cin>>first;

        if(first!=-1)
        {
            temp->left=new node(first);
            q.push(temp->left);
        }

        //rightchild

        cout<<"enter the rightchild of "<<temp->data<<endl;
        cin>>second;

        if(second!=-1)
        {
            temp->right=new node(second);
            q.push(temp->right);
        }
    }
    

    return 0;
}