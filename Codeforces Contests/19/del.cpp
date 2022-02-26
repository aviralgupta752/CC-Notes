#include <bits/stdc++.h>
using namespace std;
#define int long long
int func(vector<int>& b) {
    int n=b.size(), val=0;
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++) 
        {
            val+=(b[i]+b[j])*(b[i]+b[j]);
        }
    }
    return val;
}
map<vector<int>, int> mp;
int order(vector<int>& v, vector<int>& a, int sumv, int suma, int i, int ans) {
    int n=a.size();
    if(i>=n) 
        return ans;
    
    int val=2*(v[i]*(suma-a[i]-sumv+v[i]) + 
                a[i]*(sumv-v[i]-suma+a[i]));

    if(mp.find({suma,sumv, i})!=mp.end())
        return mp[{suma,sumv, i}];

    int x=order(v, a, sumv, suma, i+1, ans);
    int y=val + order(v, a, sumv-v[i]+a[i], suma-a[i]+v[i], i+1, ans);

    return mp[{suma,sumv,i}]=min(x, y);
}
void solve()
{
    int n;
    cin>>n;
    mp.clear();
    vector<int> v(n),a(n);
    int sumv=0, suma=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sumv+=v[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        suma+=a[i];
    }
    
    int ans=func(v)+func(a);
    int count=order(v,a,sumv,suma,0,ans);
    cout<<count<<endl;
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