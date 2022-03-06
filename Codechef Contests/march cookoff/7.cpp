#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> dp;
int solve(vector<int>& nums, int i) {
    if(i>=nums.size()) {
        return 0;
    }
    if(dp[i]) {
        return dp[i];
    }
    int a=0, b=0;
    a=solve(nums, i+1);
    b=(1<<nums[i])+solve(nums, i+2);
    return dp[i]=max(a, b);
}
int count(int val) {
    int c=0;
    while(val) {
        c+=(val%2);
        val/=2;
    }
    return c;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dp.clear();
        dp.resize(n);
        vector<int> nums(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        int val=solve(nums, 0);
        int c=count(val);

        vector<int> tmp;
        int sz=(n%2==0)?n/2:n/2+1;
        vector<int> ans(sz);

        for(int i=sz-1; i>=0; i--) {
            ans[i]=val;
            if(c>i)
                val=val&(val-1);
        }

        for(auto& x: ans) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}