  #include<bits/stdc++.h>
  using namespace std;
  bool customComparator(pair<string,int> &a,pair<string,int>&b)
  {
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    return a.first<b.first;
  }
  int main()
  {
     vector<pair<string,int>> v;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
    {
        string s;
        int x;
        cin>>s>>x;
        v.push_back({s,x});
    }
    sort(v.begin(),v.end(),customComparator); 
    for(int i=0; i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
  }
  