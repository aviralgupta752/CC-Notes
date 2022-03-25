#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" ";
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

int32_t main(){
    fastio;
    int t=1;
    // cin>>t;
    while(t--){
        int n, m, q;
        cin>>n>>m>>q;
        vector<vector<int>> g(n);
        for(int i=0; i<m; i++) {
            int u, v;
            cin>>u>>v;
            u-=1, v-=1;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        queue<int> pq;
        vector<int> vis(n);
        // cout<<q<<" ";
        for(int i=0; i<q; i++) {
            int type, x;
            cin>>type>>x;
            
            if(type==1) {
                if(vis[x-1]==0) {
                    vis[x-1]=1;
                    pq.push(x-1);
                }
            }
            else if(type==2) {
                int lvl=0;
                while(!pq.empty() and lvl<x) {
                    int sz=pq.size();
                    for(int i=0; i<sz; i++) {
                        int u=pq.front();
                        pq.pop();
                        for(int v: g[u]) {
                            if(vis[v]==0) {
                                vis[v]=1;
                                pq.push(v);
                            }
                        }
                    }
                    lvl+=1;
                }
            }
            else {
                x-=1;
                if(vis[x]==0) {
                    cout<<"NO"<<endl;
                }
                else {
                    cout<<"YES"<<endl;
                }
            }
        }
        // cout<<"hi"<<endl;
    }
}