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

void insert_at_tail(node *&head, int v)
{
    node * newnode= new node(v);
    if(head==NULL)
    {
      head = newnode;
     return;
    }

    node* tmp= head;
    while(tmp->next!=NULL)
    {
      tmp=tmp->next;
    } 
    tmp->next=newnode;
    }
void insert_at_head(node *&head,int v)
{
       node * newnode=new node(v);
        newnode->next=head;
        head=newnode;
}
void delete_from_position(node *&head,int pos)
{    
    if(pos==0)
    {
        node *temp=head;
    head=head->next;
    delete temp;
    return;
    }
    node * tmp=head;
    node *deletenode=NULL;
    for(int i=0;i<=pos-1 && tmp != NULL;i++)
    {
        deletenode=tmp;
        tmp=tmp->next;
    }
    if(tmp != NULL)
    {
        deletenode->next=tmp->next;
        delete tmp;
    }
    
}
void print_link_list(node*head)
{   
    node * tmp=head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main()
{
    node *head=NULL;
   int t;
   cin>>t;

   while(t--)
   {
    int x,v;
    cin>>x>>v;
    if(x==0)
    {
        insert_at_head(head,v);
    }
    else if(x==1)
    {
        insert_at_tail(head,v);
    }
    else if(x==2)
    {
        delete_from_position(head,v);

    }
    print_link_list(head);
   } 
    
}

