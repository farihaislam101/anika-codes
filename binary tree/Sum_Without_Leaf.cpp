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
        this->left=NULL;
        this->right=NULL;
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

        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    }
    return root;
}
int sum_without_leaf(node* root)
{
    if(root==NULL) return 0;
    
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int l=sum_without_leaf(root->left);
    
    int r=sum_without_leaf(root->right);
    int sum=root->val+l+r;
    return sum;
}
int main()
{
     node * root=input_tree();
     
     int sum=sum_without_leaf(root);
     cout<<sum<<endl;
}
