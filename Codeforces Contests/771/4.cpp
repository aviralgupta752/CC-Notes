#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pair<bool, int> check(vector<vector<int>>& ma, int r, int c) {
    unordered_map<int, int> mp;
    int val=ma[r][c];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            mp[ma[i+r][j+c]]++;
            if(ma[i+r][j+c]!=-1) {
                val=ma[i+r][j+c];
            }
        }
    }
    bool ans=(val!=-1 and (mp[-1]+mp[val]==4));
    return {ans, val};
}
bool allone(vector<vector<int>>& ma) {
    int c=0;
    int m=ma.size(), n=ma[0].size();
    for(auto& x: ma) {
        for(auto& y: x) {
            cout<<y<<" ";
            if(y==-1) {
                c++;
            }
        }
        cout<<endl;
    }
    return c==m*n;
}
int solve(vector<vector<int>>& ma) {
    int m=ma.size(), n=ma[0].size();
    queue<pair<int, int>> q;
    vector<vector<int>> vis(m, vector<int>(n));

    for(int i=0; i<=m-2; i++) {
        for(int j=0; j<=n-2; j++) {
            pair<bool, int> p=check(ma, i, j);
            if(p.first) {
                q.push({i, j});
                vis[i][j]=p.second;
            }
        }
    }
    vector<vector<int>> ans;
    while(!q.empty()) {
        int r=q.front().first, c=q.front().second;
        q.pop();
        ans.push_back({r, c});

        for(int k=0; k<2; k++) {
            for(int l=0; l<2; l++) {
                ma[r+k][c+l]=-1;
                vis[r+k][c+l]=vis[r][c];
            }
        }

        for(int i=0; i<=m-2; i++) {
            for(int j=0; j<=n-2; j++) {
                pair<bool, int> p=check(ma, i, j);
                if(p.first and vis[i][j]==0) {
                    q.push({i, j});
                    vis[i][j]=p.second;
                }
            }
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    for(auto& x: ans) {
        for(auto& y: x) {
            cout<<y+1<<" ";
        }
        cout<<vis[x[0]][x[1]]<<endl;
    }
    // if(allone(ma)==1) {
    //     cout<<ans.size()<<endl;
    //     for(auto& x: ans) {
    //         for(auto& y: x) {
    //             cout<<y+1<<" ";
    //         }
    //         cout<<vis[x[0]][x[1]]<<endl;
    //     }
    // }
    return -1;
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        int n, m;
        cin>>m>>n;
        
        vector<vector<int>> ma(m, vector<int>(n));
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                cin>>ma[i][j];
            }
        }
        cout<<solve(ma)<<endl;
    }
}