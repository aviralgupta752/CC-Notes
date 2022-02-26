#include <bits/stdc++.h>

using namespace std;

#define int long long
void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if((a%2==1&&v[i]%2==1)||(a%2==0&&v[i]%2==0))
        {
            a=0;
        }
        else
        {
            a=1;
        }
    }
    
    if(a%2==b%2)
    {
        cout<<"Alice"<<endl;
    }
    else
    {
        cout<<"Bob"<<endl;
    }
}

int32_t main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }
    return 0;
}