#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dfs(vector<vector<int>>& g, vector<int>& cost, int v, vector<int>& vis) {
    vis[v]=1;
    int ans=cost[v];
    for(auto& x: g[v]) {
        if(vis[x]==0) {
            ans+=dfs(g, cost, x, vis);
        }
    }
    return ans;
}
int solve(vector<vector<int>>& g, vector<int>& cost) {
    int n=g.size();
    vector<int> vis(n);
    return dfs(g, cost, 2, vis);
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        int n,m;
        int u,v;
        cin>>n>>m;

        vector<int> cost(n);
        for(int i=0; i<n; i++) {
            cin>>cost[i];
        }
        vector<vector<int>> g(n);
        for(int i=0; i<m; i++) {
            cin>>u>>v;
            g[u-1].push_back(v-1);
            g[v-1].push_back(u-1);
        }

        int q;
        cin>>q;
        
        int ans=solve(g, cost)-n*(n-1)/2;
        
        while(q--) {
            char c;
            cin>>c;
            if(c=='?') {
                cout<<ans+2*m<<endl;
            }
            else {
                int u,v;
                cin>>u>>v;
                if(c=='+') {
                    m+=1;
                    g[u-1].push_back(v-1);
                    g[v-1].push_back(u-1);
                }
                else {
                    m-=1;
                    g[u-1].erase(find(g[u-1].begin(), g[u-1].end(), v-1));
                    g[v-1].erase(find(g[v-1].begin(), g[v-1].end(), u-1));
                }
            }
        }
    }
}