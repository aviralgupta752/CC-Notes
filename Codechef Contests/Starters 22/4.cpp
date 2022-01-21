#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n;
vector<vector<int>> dp;
int solve(string& a, string& b, int i, int j, int c) {
    if(i>=n and j>=n){
        return 0;
    }
    if(dp[i][j]){
        return dp[i][j];
    }
    int ans=INT_MAX;
    if(i<n){
        if(a[i]=='0'){
            ans=min(ans, c+solve(a, b, i+1, j, c));
        }
        else{
            ans=min(ans, solve(a, b, i+1, j, c+1));
        }
    }
    if(j<n){
        if(b[j]=='0'){
            ans=min(ans, c+solve(a, b, i, j+1, c));
        }
        else{
            ans=min(ans, solve(a, b, i, j+1, c+1));
        }
    }
    return dp[i][j]=ans;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        string a, b;
        cin>>a>>b;
        dp.clear();
        dp.resize(n+1, vector<int>(n+1, INT_MAX));
        // cout<<solve(a, b, 0, 0, 0)<<endl;
        dp[n][n]=0;
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                if(i<n){
                    if(a[i]=='0'){
                        dp[i][j]=min(dp[i][j], c+solve(a, b, i+1, j, c));
                    }
                    else{
                        dp[i][j]=min(dp[i][j], solve(a, b, i+1, j, c+1));
                    }
                }
                if(j<n){
                    if(b[j]=='0'){
                        dp[i][j]=min(dp[i][j], c+solve(a, b, i, j+1, c));
                    }
                    else{
                        dp[i][j]=min(dp[i][j], solve(a, b, i, j+1, c+1));
                    }
                }
            }
        }
    }
}