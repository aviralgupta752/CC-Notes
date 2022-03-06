#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int mxm, mim;
map<int, int> vis;
void dfs(int v, map<int, vector<int>>& g, int n) {
    vis[v]=1;
    mim=min(mim, v);
    if(v<=n) {
        mxm=max(mxm, v);
    }
    for(auto& x: g[v]) {
        if(vis.find(x)==vis.end()) {
            dfs(x, g, n);
        }
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        map<int, vector<int>> g;
        int u, v;
        for(int i=0; i<m; i++) {
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vis.clear();
        vector<pair<int, int>> tmp;
        
        for(auto& x: g) {
            if(vis.find(x.first)==vis.end()) {
                mxm=0, mim=INT_MAX;
                dfs(x.first, g, n);
                tmp.push_back({mim, mxm});
            }
        }
        int ans=0, fa=n;
        if(tmp.size()==0) {
            cout<<n<<endl;
            continue;
        }
        fa=min(fa, n-tmp[0].second);
        int maxx=tmp[0].second;

        for(int i=1; i<tmp.size(); i++) {
            cout<<tmp[i].first<<" "<<tmp[i].second<<" "<<ans<<" "<<fa<<endl;
            if(tmp[i].first>maxx) {
                ans+=tmp[i].first-maxx;
                fa=min(fa, ans+n-tmp[i].second);
                maxx=max(maxx, tmp[i].second);
            }
            cout<<tmp[i].first<<" "<<tmp[i].second<<" "<<ans<<" "<<fa<<endl;
        }
        cout<<fa<<endl;
    }
}