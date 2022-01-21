#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

vector<int> ans;
void dfs(vector<vector<int>>& g, map<pair<int, int>, int>& mp, int v, int pa, int w){
    if(pa==-1){
        int c=0;
        for(auto& x: g[v]){
            int mim=min(x, v), mxm=max(x, v);
            ans[mp[{mxm, mim}]]=w;
            if(w==2 and c==0){
                c+=1;
                dfs(g, mp, x, v, 5);
            }
            else
                dfs(g, mp, x, v, 2);
        }
    }
    else{
        for(auto& x: g[v]){
            if(x==pa){
                continue;
            }
            int mim=min(x, v), mxm=max(x, v);
            ans[mp[{mxm, mim}]]=w;
            if(w==5)
                dfs(g, mp, x, v, 2);
            else
                dfs(g, mp, x, v, 5);
        }
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, u, v;
        cin>>n;
        ans.clear();
        ans.resize(n-1);
        vector<vector<int>> g(n);
        map<pair<int, int>, int> mp;

        int mxm=0;
        for(int i=0; i<n-1; i++){
            cin>>u>>v;
            u-=1;
            v-=1;
            if(u<v){
                swap(u, v);
            }
            g[u].push_back(v);
            g[v].push_back(u);
            mp[{u, v}]=i;
            mxm=max({mxm, (int)g[u].size(), (int)g[v].size()});
        }

        if(mxm>2){
            cout<<-1<<endl;
            continue;
        }
        dfs(g, mp, 0, -1, 2);
        for(auto& x: ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}