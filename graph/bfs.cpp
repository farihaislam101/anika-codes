#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
bool vis[1000];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
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
    bfs(src);
}
