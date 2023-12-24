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
void delete_node(node *head,int pos)
{
node * tmp=head;
for(int i=1;i<=pos-1;i++)
{
    tmp=tmp->next;
}
node * deletenode =tmp->next;//30
tmp->next=tmp->next->next;
delete deletenode;
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
 node * head= new node(10); 
 node * a=new node(20); 
 node * b=new node(30); 
 node * c=new node(40); 
 node * d=new node(50);
 head->next=a;
 a->next=b;
 b->next=c;
 c->next=d;
 print_link_list(head); 
 int pos;
 cin>>pos;
 
 
delete_node(head,pos);
print_link_list(head);
}
