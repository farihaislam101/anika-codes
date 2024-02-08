#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Max heap;
    priority_queue<int,vector<int>,greater<int>>pq;
    while(true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x);//inserted o(logn)

        }
        else if(c==1)
        {
            pq.pop();
        }
        else if(c==2)
        {
            cout<<pq.top()<<endl;
        }
        else 
        break;
    }
}
