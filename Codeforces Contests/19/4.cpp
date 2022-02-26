#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int calc(vector<int>& a) {
    int ans = 0;
    int n=a.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            ans+=(a[i]+a[j])*(a[i]+a[j]);
        }
    }
    return ans;
}

int ta;
map<vector<int>, int> dp;
int solve(vector<int>& a, vector<int>& b, int id, int sa, int sb) {
    int n=a.size();
    if(id>=n) 
        return ta;
    
    int x=INT_MAX, y=INT_MAX;
    if(dp.find({id,sa,sb})!=dp.end()) {
        return dp[{id,sa,sb}];
    }

    x=solve(a, b, id+1, sa, sb);
    y=2*a[id]*(sb-b[id]-sa+a[id]) + 2*b[id]*(sa-a[id]-sb+b[id]) + solve(a, b, id+1, sa-a[id]+b[id], sb-b[id]+a[id]);
    
    return dp[{id,sa,sb}]=min(x, y);
}

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        dp.clear();
        vector<int> a(n), b(n);
        int sa=0, sb=0;
        
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sa+=a[i];
        }
        for(int i=0;i<n;i++) {
            cin>>b[i];
            sb+=b[i];
        }

        ta=calc(a)+calc(b);
        cout<<solve(a, b, 0, sa, sb)<<endl;
    }
}