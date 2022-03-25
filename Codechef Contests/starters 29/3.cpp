#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> amount;
int mod=1e9+7;
// void dfs(vector<vector<pair<int, int>>>& g, int v, int am)  {
//     bool c=0;
//     vis[v]=1;
//     for(auto& x: g[v]) {
//         c=1;
//         dfs(g, x.second, ((x.first*am)%mod+amount[x.second])%mod);
//     }
//     amount[v]=(c)?0:am%mod;
// }
int32_t main(){
    fastio;
    int n, m;
    cin>>n>>m;
    amount=vector<int>(n);
    for(int i=0; i<n; i++) {
        cin>>amount[i];
    }
    
    int w, c2, c, x;
    for(int i=0; i<m; i++) {
        cin>>c>>x;
        c-=1;
        for(int i=0; i<x; i++) {
            cin>>w>>c2;
            c2-=1;
            amount[c2]=(amount[c2]+(amount[c]*w)%mod)%mod;
        }
        amount[c]=0;
    }
    for(auto& x: amount) {
        cout<<x<<endl;
    }
}