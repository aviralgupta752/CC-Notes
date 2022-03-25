#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" ";
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

int32_t main(){
    fastio;
    int t;
    cin>>t;
    map<int, vector<pair<int, int>>> fac;
    int sz=100000;
    vector<int> prime(sz+1, 1);
    prime[0]=prime[1]=0;
    for(int i=2; i*i<=sz; i++){
        if(prime[i]==0) {
            for(int j=i*i; j<=sz; j+=i) {
                int tmp=j, c=-1;
                while(tmp) {
                    tmp/=i;
                    c+=1;
                }
                prime[j]=0;
                fac[j].push_back({i, c});
            }
        }
    }
    
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int> nums(n);
        
        map<int, unordered_map<int, int>> dp;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            for(auto& x: fac[nums[i]]) {
                mp[x]++;
            }
            dp[i]=mp;
        }
        for(int i=0; i<q; i++) {
            int l, r;
            cin>>l>>r;
            l-=1;
            r-=1;
            int ans=0;
            for(auto& x: dp[r]) {
                if(x.second-dp[l-1][x.first]>1)
                    ans=max(ans, x.first);
            }
            cout<<ans<<endl;
        }
    }
}