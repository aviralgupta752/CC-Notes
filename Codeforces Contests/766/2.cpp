#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int md(int a, int b, int c, int d){
    return abs(a-c)+abs(b-d);
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> ma(n, vector<int>(m));
        vector<int> ans;
        int d=n+m-2;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ma[i][j]=max({md(i, j, 0, 0), md(i, j, 0, m-1), md(i, j, n-1, m-1), md(i, j, n-1, 0)});
                ans.push_back(ma[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}