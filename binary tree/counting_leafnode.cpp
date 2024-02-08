#include<bits/stdc++.h>
using namespace std;
class node
{
   public:
     int val;
    node* left;
    node * right;
     node(int val)
     {
        this->val=val;
        this->right=NULL;
        this->left=NULL;

     }
};
node * input_tree()
{
    int val;
    cin>>val;
    node * root;
    if(val==-1)
    {
        root=NULL;
    }
    else{
        root=new node(val);
    }
    queue<node*>q;
    if(root)q.push(root);
    while(!q.empty())
    {
        node * f=q.front();
        q.pop();
        //jabotio kaj
        int l,r;
        cin>>l>>r;
        node *left;
        node * right;
        if(l==-1)left=NULL;
        else left=new node(l);
        if(r==-1)right =NULL;
        else right=new node(r);
        f->left=left;
        f->right=right;
        //children push
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    }
    return root;
}

int count_leaf(node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else{
        int l=count_leaf(root->left);
        int r=count_leaf(root->right);
        return l+r;
    }
}
int main()
{
    node * root=input_tree();
    cout<<count_leaf(root)<<endl;
}
