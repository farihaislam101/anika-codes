#include<bits/stdc++.h>
using namespace std;
class node
{
   public:
     int val;
    node* next;
    node * prev;
     node(int val)
     {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
     }
};
void insert_at_head(node *&head,node *&tail,int val)
{
     node* newnode=new node(val);
    if(head== NULL)
    {
      head=newnode;
      tail=newnode;
      return;  
    }
    newnode->next=head;
    head->prev=newnode;
    head = newnode;
}


void  insert_position(node * head,int val,int pos)
{
    node * newnode= new node(val);
    node * tmp=head;
for(int i=1;i<pos;i++)
{
tmp=tmp->next;

}
newnode->next=tmp->next;//100->30
tmp->next=newnode;//20->100
newnode->next->prev=newnode;//30<=100;
newnode->prev=tmp;//20<=100
}
void insert_at_tail(node *head,node *& tail,int val)
{
    node * newnode=new node(val);
    if(tail==NULL)
    {   
      head=newnode;
      tail=newnode;
      return;  
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
void print_normal(node * head)
{
    node * tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void print_reverse(node * tail)
{
    node * tmp=tail;
    while(tmp!= NULL)
    {
        cout <<tmp->val<<" ";
        tmp=tmp->prev;
    }
}
int size(node *head)
{
    node* tmp=head;
    int count=1;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main()
{

    node * head=new node(10);
    node * a=new node(20);
    node * b=new node(30);
    node * c=new node(40);
    node * tail=c;
    //connection
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    c->prev=b;
    int pos,val;
    cin>>pos>>val;
     if(pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }
   else if(pos==0)
    {
        insert_at_head(head,tail,val);
    }
     else if(pos==size(head))
    {
        insert_at_tail(head,tail,val);
    }
    else
    {
    insert_position(head,pos,val);
    }
    print_normal(head);
    print_reverse(tail);
}
