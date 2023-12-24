#include<bits/stdc++.h>
using namespace std;
class node
{
public:
   int val;
   node * next;
   node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};
void insert_at_head(node *&head,int v)
{
    node * newnode=new node(v);
    node* tmp=head;
    newnode->next=head;
    head=newnode;
    cout<<"Inserted at head"<<endl;
    
}
void insert_at_tail(node *&head,int val)
{
    node * newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
    cout<<"Inserted a tail"<<endl;
}
void insert_at_position(node *head,int pos,int v)
{
    node* newnode=new node(v);
    node *tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    cout<<endl<<"Inserted at position"<<endl;
}
void delete_head(node *&head)
{
    node * deletenode=head;
    head=head->next;
    delete deletenode;
    cout<<endl<<"Head deleted"<<endl;
}
void delete_from_position(node * head,int pos)
{
    node * tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    node * deletenode=tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
    cout<<endl<<"Position deleted"<<pos<<endl;
}

int main(){
node *head=NULL;
while(true)
{
    cout<<"Option 1: Insert at head"<<endl;
    cout<<"Option 2: Insert at tail"<<endl;
    cout<<"Option 3: Insert at any position"<<endl;
    cout<<"Option 4: Delete head"<<endl;
    cout<<"Option 5: Delete at any position"<<endl;
    cout<<"Option 6: Printing linked list"<<endl;
    cout<<"Option 7: TERMINATE"<<endl;
    int op;
    cout<<"Enter the option number: "<<endl;
    cin>>op;
    if(op==1)
    {
       int v;
       cout<<"Enter the value of head: ";
       cin>>v;
       insert_at_head(head,v);
    }


}
}




