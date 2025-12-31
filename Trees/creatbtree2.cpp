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
node* binarytree()
{
      int x;
   
    cin>>x;
    if(x==-1)
    return NULL;
    node*temp=new node(x);
    cout<<"Enter the leftchild of "<<x<<endl;
    temp->left=binarytree();
      cout<<"Enter the rightchild of "<<x<<endl;
    temp->right=binarytree();
    return temp;
}

void preorder(node*root)
{
  if(root==NULL) return;
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

void inorder(node*root)
{
  if(root==NULL) return;

inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void postorder(node*root)
{
  if(root==NULL) return;

postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
}

int main()
{

  cout<<"enter root node"<<endl;
  node*root;
  root=binarytree();
 cout<<endl;
  preorder(root); 
  cout<<endl;
  inorder(root);
  cout<<endl;
  postorder(root);
    

    return 0;
}