#include<bits/stdc++.h>
using namespace std;
class node{
public:
int val;
node *next;
node(int val)
{
    this->val=val;
    this->next=NULL;
}
};
void insert_at_tail(node *&head,int v)
{
   node * newnode =new node(v);
   if(head==NULL)
   {
    head=newnode;
    return;
   }
   node* tmp=head;
   while(tmp->next!=NULL)
   {
    tmp=tmp->next;
   }
   tmp->next=newnode;
    cout<<"inserted at tail"<<endl<<endl;
}
void insert_at_position(node *head,int pos,int v)
{
    node * newnode= new node(v);
    node * tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<< endl<< endl<< "Inserted at position"<<endl;
}
void insert_at_head(node *&head,int v)
{
       node * newnode=new node(v);
        newnode->next=head;
        head=newnode;
        cout<<endl<<"Inserted at head"<<endl;

}
void print_link_list(node*head)
{   
    cout<<endl;
    cout<<"Your linked list";
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
  node * head=NULL;
  while(true)
{
    cout<<"option 1: Insert at tail"<<endl;
    cout<<"option 2: Print Linked list"<<endl;
    cout<<"option 3: insert at any position"<<endl;
    cout<<"Option 5: insert at head"<<endl;
    cout<<"option 5: terminate"<<endl;
    
    
    int op;
    cin>>op;
    if(op==1)
    {
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2)
    {
        print_link_list(head);
    }
    else if(op==3)
    {
        int pos,v;
        cout<<"Enter position";
        cin>>pos;
         cout<<"Enter v";
        cin>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
       else
       {
        insert_at_position(head,pos,v);
       }
    }
    if(op==4)
    {
        int v;
        cout<<"Enter value";
        cin>>v;
        insert_at_head(head,v);
    }
    else{
        break;
    }
}

}
