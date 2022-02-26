#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> dp;
int solve(string& s, int id) {
    int n = s.size();
    if(id>=n) {
        return 0;
    }
    int ans=0;
    bool tmp=0;
    if(dp[id]) {
        return dp[id];
    }
    for(int i=0; i<n; i++) {
        if(s[id+i]==s[n-i-1-id]) {
            ans+=1;
            tmp=1;
        }
        else {
            if(tmp==0) {
                return max(ans, 0LL);
            }
            ans+=solve(s, id+i);
            break;
        }
    }
    return dp[id]=ans;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        dp.clear();
        int n=s.size();
        dp.resize(n);
        cout<<max(n-solve(s, 0)-1, 0LL)<<endl;
    }
}