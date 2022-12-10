#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

pair<int, int> solve(vector<int>& a, vector<vector<int>>& g, vector<int>& vis, int v) {
    vis[v]=1;
    int sum=0, mim=LLONG_MAX, mxm=0;
    for(auto& x: g[v]) {
        if(vis[x]==0) {
            pair<int, int> val = solve(a, g, vis, x);
            sum+=val.first;
            mim=min(mim, val.second);
            mxm=max(mxm, val.second);
        }
    }
    if(mim==LLONG_MAX) {
        return {a[v], a[v]};
    }
    if(mim<a[v]) {
        // cout<<v<<" "<<sum+a[v]-mim<<endl;
        return {sum+a[v]-mim, a[v]};
    }
    else {
        // cout<<v<<" "<<sum<<endl;
        return {sum, mxm};
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    for(int l=0; l<t; l++) {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        
        vector<vector<int>> g(n);
        vector<int> vis(n);

        vector<int> node;
        for(int i=0; i<n; i++) {
            cin>>b[i];
            if(b[i]) {
                g[b[i]-1].push_back(i);
            }
            else {
                node.push_back(i);
            }
        }
        

        int ans=0;
        for(auto& x: node) {
            ans+=solve(a, g, vis, x).first;
        }
        cout<<"Case #"<<l+1<<": "<<ans<<endl;
    }
}