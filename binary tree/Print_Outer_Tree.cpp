#include<bits/stdc++.h>
using namespace std;
class node
{
   public:
     int val;
    node* left;
    node* right;

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
    if(val==-1)root=NULL;
    else root =new node(val);
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node * f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        node* left;
        node* right;
        if(l==-1)left=NULL;
        else left= new node(l);
        if(r==-1)right=NULL;
        else right=new node(r);
        f->left=left;
        f->right=right;

        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return root;
}
    void printLeft(node* root)
    {
        if(!root)return;
        if(root->left)
        {    
            printLeft(root->left);
            cout<<root->val<<" ";
        }
        else if(root->right) {
            printLeft(root->right);
            cout<<root->val<<" ";
        }
    }
void printRight(node* root)
    {
        if(!root)return;
        if(root->right)
        {    
            printLeft(root->right);
            cout<<root->val<<" ";
        }
        else if(root->left) {
            printLeft(root->left);
            cout<<root->val<<" ";
        }
    }
    void printOuter(node * root)
    {
        if(!root)
        return;
        cout<<root->val;
        printLeft(root->left);
        printLeft(root);
        printRight(root->right);
    }
int main()
{
    node * root=input_tree();
    printOuter(root);
}
