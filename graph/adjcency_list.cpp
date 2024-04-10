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
  //0 kar kar shathe connected jante chaile..

  for(int x:ar[3])
  {
    cout<<x<<" ";
  }
}
