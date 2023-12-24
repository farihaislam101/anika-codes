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
void print_link_list(node * head)
{
  cout<<"your linked list";
   node *tmp=head;
   while(tmp !=NULL)
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
    cout<<"option 1: Insert at Tail"<<endl;
    cout<<"option 2:print linked list"<<endl;
    cout<<"option 3: terminate"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
      int v;
      cin>>v;
      insert_at_tail(head ,v);
    }
   else if(op==2)
    {
 print_link_list(head);
    }
   else{
    break;
   }
   
   
    }
    
}
