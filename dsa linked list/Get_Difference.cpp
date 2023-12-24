#include<bits/stdc++.h>
using namespace std;
class node
{
   public:
     int val;
    node* next;
     node(int val)
     {
        this->val=val;
        this->next=NULL;
     }
};
void insert_tail(node *&head,node *&tail,int val)
{
    node * newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void difference(node* head)

{
    node* tmp=head;
    if(head=NULL)
    {
        return ;
    }
 int minVal=tmp->val;
int maxval=tmp->val;
while(tmp!=NULL)
{
    minVal=min(minVal,tmp->val);
    maxval=max(maxval,tmp->val);
    tmp=tmp->next;
}
int a=maxval-minVal;
     cout<<a<<endl;
}
int main()
{
   node * head=NULL;
   node * tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    difference(head);
   
}
