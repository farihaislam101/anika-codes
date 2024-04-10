#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
int level[1000];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        cout<<p<<endl;
        for(int c:v[p])
        {
            //cout<<c<<" "<<endl;
           // if(vis[c]==false)
           if(!vis[c])
            {
                q.push(c);
                vis[c]=true;
                level[c]=level[p]+1;
            }
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(src);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<level[i]<<endl;
    }
}
