#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int ld, nd;
vector<int> d, a;

map<vector<int>, int> dp;
int solve(int id, int last, int k, vector<int>& d){
    if(id>=nd){
        return a[last]*(ld-d[last]);
    }
    if(dp.find({id, last, k})!=dp.end()){
        return dp[{id, last, k}];
    }
    
    int ans=INT_MAX;
    if(k>0 and a[id]>=a[last]){
        ans=min(ans, solve(id+1, last, k-1));
    }
    ans=min(ans, a[last]*(d[id]-d[last])+solve(id+1, id, k));

    return dp[{id, last, k}]=ans;
}
int32_t main(){
    fastio;
    int n, l, k;
    cin>>n>>l>>k;
    
    ld=l;
    nd=n;
    d.resize(n);
    a.resize(n);

    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<solve(1, 0, k)<<endl;
}