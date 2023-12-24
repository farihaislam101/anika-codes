
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node* next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_values(node*& head, node*& tail, int val)
{
    node* newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void remove_duplicate(node*& head)
{
    if (head == NULL)
    {
        return;
    }
    node* a = head;
    while (a != NULL)
    {
        node* tmp = a;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == a->val)
            {
                node* duplicate = tmp->next;
                tmp->next = tmp->next->next;
                delete duplicate;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        a = a->next;
    }
}

void print_list(node* head)
{
    node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    int val;
    node* head = NULL;
    node* tail = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_values(head, tail, val);
    }

    remove_duplicate(head);
    print_list(head);

    while (head != NULL)
    {
        node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
