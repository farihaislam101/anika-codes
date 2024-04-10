#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,e;
   cin>>n>>e;
   vector<int>ar[n];
   while(e--)
   {
    int a,b;
    cin>>a>>b;
    ar[a].push_back(b);
    ar[b].push_back(a);
   } 
   int q;
   cin>>q;

   while(q--)
   {
    int x;
    cin>>x;
    sort(ar[x].begin(),ar[x].end(),greater<int>());
    if(ar[x].size()==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
    for(int i: ar[x])
    {
        cout<<i<<" ";
    }
    cout<<endl;
    }
   }
}
