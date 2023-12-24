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
void insert_values(node *&head, node *&tail,int val)
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
bool is_equal(node * head,node * head2)
{
    while(head != NULL && head2 != NULL)
    {
        if(head->val != head2->val)
        {
            return false;
        }
        head= head->next;
        head2= head2->next;
    }
return(head==NULL && head2 ==NULL);

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
        insert_values(head,tail,val);
    }
     node * head2=NULL;
    node * tail2=NULL;
    int val2;
    while(true)
    {
        cin>>val2;
        if(val2==-1)
        {
            break;
        }
        insert_values(head2,tail2,val2);
    }
    if(is_equal(head,head2))
    {
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
}
