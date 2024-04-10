#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
int level[1000];
int par[1000];
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
                par[c]=p;
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
    int src,des;
    cin>>src>>des;
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(par,-1,sizeof(par));
    bfs(src);
    int x=des;
    vector<int>path;
    while(x!=-1)
    {
        path.push_back(x);
        x=par[x];
    }
    reverse(path.begin(),path.end());
    for( auto t:path)
    {
        cout<<t<<" ";
    }
}
