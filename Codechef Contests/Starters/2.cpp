#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int solve(vector<int>& nums) {
    int n = nums.size();
    int mod = 1e9 + 7;
    unordered_map<int, int> last;
    vector<int> dp(n + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        int x = nums[i];
        dp[i + 1] = (2 * dp[i]) % mod;
        if(last.find(x)!=last.end()) {
            dp[i + 1] = (dp[i+1] - dp[last[x]]) % mod;
        }
        last[x] = i;
    }
    return (dp[n]-1) % mod;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        cout<<solve(nums)<<endl;
    }
}