#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int> &v,int x)
{
  
    v.push_back(x);
    int cur_idx=v.size()-1;
    
    while(cur_idx!=0){
     int p_idx=(cur_idx-1)/2;
    if(v[p_idx]<v[cur_idx])
    {
        swap(v[p_idx],v[cur_idx]);
       
    }
    else
    break;
     cur_idx=p_idx;
    }
}
void delete_heap(vector<int> &v)

{
    v[0]=v[v.size()-1];
    v.pop_back();
   int cur_idx=0;
    while(true)
    {
        int l_idx=(cur_idx*2)+1;
        int r_idx=(cur_idx*2)+2;
        if(l_idx<=v.size()-1 && r_idx<=v.size()-1)
        {
            //duitai ache
            if(v[l_idx]>=v[r_idx] && v[l_idx]>v[cur_idx])
            {
                swap(v[l_idx],v[cur_idx]);
                cur_idx=l_idx;
            }
            else if(v[r_idx]>=v[l_idx] && v[r_idx]>v[cur_idx])
            {
                swap(v[r_idx],v[cur_idx]);
                cur_idx=r_idx;
            }
            else
            {
                break;
            }
        }
        else if(l_idx<=v.size()-1)
        {
            if(v[l_idx]>v[cur_idx])
            {
                swap(v[l_idx],v[cur_idx]);
                cur_idx=l_idx;
            }
            //left ache
            else{
                break;
            }
        }
         else if(r_idx<=v.size()-1)
        {
            //right ache
            if(v[r_idx]>v[cur_idx])
            {
                swap(v[r_idx],v[cur_idx]);
                cur_idx=r_idx;
            }
            else{
                break;
            }
        }
        else break;
    }
}
void print_heap(vector<int>v)
{
    for(int val:v)
    cout<<val<<" ";
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);    
    }
    delete_heap(v);
    for(int val:v)
    { 
        cout<<val<<" ";
    }

    
}
