#include<bits/stdc++.h> 
using namespace std;

    class Node
    {
        public:
        int data;
        Node*left,*right;
        Node(int value)
        {
            data=value;
            left=right=NULL;
        }
    };

    Node*insert(Node*root,int x)
    {
        if(!root) 
       {
         Node*temp=new Node(x);
        return temp;
       }

        if(x< root->data)
        root->left=insert(root->left,x);

        else{
             root->right=insert(root->right,x);
        }

        return root;
    }

    void inorder(Node*root)
    {
        if(!root) return;

        inorder(root->left);
        cout<<root->data<<" ";
          inorder(root->right);
    }

    bool search (Node*root,int x)
    {
        if(!root) return 0;
        if(root->data==x) return 1;

        if(root->data>x) return search(root->left,x);
        else return search(root->right,x);
    }
int main() {
    int arr[]={3,7,4,1,6,8};
    Node*root=NULL;
    for (int i = 0; i < 6; i++)
    {
       root=insert(root,arr[i]);
    }
    inorder(root);
    cout<<endl<<search(root,77);
    
    return 0;
}