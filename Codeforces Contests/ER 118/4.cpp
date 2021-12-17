#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];

        int mod=998244353;
        int ans=0;
        unordered_map<int,int> m;
        
        vector<int> dp(n+1,0);
        for(int i=0; i<n; i++){
            if(nums[i]==0 or nums[i]==1){
                dp[i]=1;
            }
        }
        for(int i=1; i<=n; i++){
            dp[i]+=(dp[i-1]*2)%mod;


            cout<<dp[i]<<" ";
        }
        for(int i=0; i<n; i++){
            ans=(ans+dp[i])%mod;
        }
        cout<<ans<<endl;
    }
}