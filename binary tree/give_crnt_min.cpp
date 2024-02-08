#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int t;
    cin>>t;
    while (t--) {
        int c;
        cin >> c;


        if (c == 0) {
            int x;
            cin >> x;
            pq.push(x);
            if(!pq.empty())
            {
             cout << pq.top() << endl;
            }
            else{
                cout<< "Empty"<<endl;
            }
           
        } 
        else if (c == 1) 
        {
            if (!pq.empty()) {
                cout<<pq.top()<<endl;
            } 
            else
             {
                cout << "Empty" << endl;
            }
        } 
        else if (c == 2) {
            if (!pq.empty()) {
                pq.pop();
            }
                if(!pq.empty())
                {
                cout << pq.top() << endl;
                }
                
            else if(pq.empty())
            {
                cout << "Empty" << endl;
            }
        } 
        else
        {
            break;
        }
    }

    return 0;
}
