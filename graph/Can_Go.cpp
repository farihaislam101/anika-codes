#include<bits/stdc++.h>
using namespace std;
char A[20][20];
bool vis [20][20];
vector<pair<int,int>> d ={{0,1},{0,-1},{-1, 0},{1, 0}};
 int n,m;
 pair<int, int>a,b,c;
bool valid(int i, int j)
{
    if(i<0||i>=n||j<0||j>=m)
    {
        return false;
    }
    return true;
}
void dfs(int i, int j)
{
    vis[a.first][a.second]=true;
    if(c.first==i && c.second==j)
    {

    for(int i=0;i<4;i++)
    {
        int ci=a.first+d[i].first;
        int cj=a.second+d[j].second;
       if(valid(ci,cj)==true && vis[ci][cj]==false)
       {
            dfs(ci,cj);
       }
    }
    }
}
int main()
{
   cin>>n>>m;
   int mat[n][m];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cin>>mat[i][j];
        if(mat[i][j]=='A')
        {
            a={i,j};

        }
        else if(mat[i][j]=='B')
        {
            b={i,j};
        }
        else if(mat[i][j]=='.')
        {
            c={i,j};
        }
    }
   }

   memset(vis,false ,sizeof(vis));
   dfs(a.first,a.second);
    if(vis[b.first][b.second]=true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
