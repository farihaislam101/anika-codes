#include<bits/stdc++.h>
using namespace std;
void printlist(list<int>&mylist){
cout<<"L ->";
for(int val : mylist)
{
    cout<<val<<" ";
}
cout <<endl;
list<int> reversedlist=mylist;
reverse(reversedlist.begin(),reversedlist.end());
cout<<"R -> ";
for(int value:reversedlist)
{
    cout<<value<<" ";
}
cout <<endl;
}
int main()
{
    list<int> mylist;
    int q;
    cin>>q;
    while(q--)
    {
        int x, v;
        cin>>x>>v;
        if(x==0)
        {
            mylist.push_front(v);
        }
        else if (x==1)
        {
            mylist.push_back(v);
        }
        else if(x==2)
        {
            int a= mylist.size();
            if(v>= a)
            {
                 cout<<"Invalid"<<endl;
            }
            else
            {
            mylist.erase(next(mylist.begin(),v));
        }
        }
       
        printlist(mylist);
    }
}
