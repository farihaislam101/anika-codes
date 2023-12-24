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
void insert_at_tail(node *&head,node * &tail,int val)
{
node * newnode=new node(val);
if(head==NULL)
{
head=newnode;
tail=newnode;
}
tail->next=newnode;
tail=newnode;
}
int find_value(node *head, int x)
{
    node *tmp=head;
    int index=0;
    while(tmp!=NULL)
    {
        if(tmp->val==x)
        {
            return index;
        }
            tmp=tmp->next;
            index++;
    }
    return -1;      
}
int main()
{
     int t;
   cin>>t;
   for(int i=0;i<t;i++){

   node * head=NULL;
   node * tail=NULL;
  
  
   while(true)
   {
    int val;
    cin>>val;
    if(val==-1)
    {
        break;
    }
    insert_at_tail (head,tail,val);
   }
    int x;
    cin>>x;
int s=find_value(head,x);
cout<< s <<endl;
   } 
}
