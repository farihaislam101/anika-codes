#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> ar[n];

    // Input directed edges
    while (e--) {
        int a, b;
        cin >> a >> b;
        ar[a].push_back(b);
       // ar[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--) {
        int c, d;
        cin >> c >> d;
         bool found = false;
        for (int i : ar[c]) 
        {
            //cout<<i<<endl;
           // bool found = false;
            if(i==d || c==d)
            {
                found=true;
                break;
            }

        }
      if(found)
      {
        cout<<"YES"<<endl;
      }
     else 
     {
        cout<<"NO"<<endl;
     }
    }
}
