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
void delete_head(node *& head)
{
    node * deletenode=head;
    head=head->next;
    delete deletenode;
    head->prev=NULL;
}

void delete_node(node *head,int pos)
{
node *tmp=head;
for(int i=1;i<=pos-1;i++)
{
    tmp=tmp->next;
}
node * deletenode=tmp->next;
tmp->next=tmp->next->next;
if(tmp->next!=NULL){
tmp->next->prev=tmp;
}
delete deletenode;
}
void print_normal(node * head)
{
    node * tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void delete_tail(node *& tail)
{
    node * deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    tail->next=NULL;
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
    int count=0;
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
    b->next=c;
    c->prev=b;
   int pos;
   cin>>pos;
   if(pos>=size(head))
   {
    cout<<"Invalid "<<endl;
   }
   else if(pos==0)
   {
    delete_head(head);
   }
   else if(pos==size(head)-1)
   {
    delete_tail(tail);
   }
   else
    {
        delete_node(head,pos);
    }
    
    print_normal(head);
    print_reverse(tail);
}
