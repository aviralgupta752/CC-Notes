#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" ";cout<<endl;
int solve(vector<int>& nums, vector<int>& b, int x) {
    int n=nums.size();
    int ans=n;
    unordered_map<int, int> mp;
    for(int i=0; i<30; i++) {
        int val=(1<<i);
        if(x&val) {
            continue;
        }
        for(int j=0; j<n; j++) {
            if(nums[j]&val) {
                if(mp.find(nums[j])==mp.end()) {
                    ans-=1;
                    mp[nums[j]]=1;
                }
            }
        }
    }
    return ans;
}
int32_t main(){
    fastio;
    int t=1;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int> nums(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        for(int i=0; i<q; i++) {
            int x, m;
            cin>>x>>m;
            vector<int> b(m);
            for(int j=0; j<m; j++) {
                cin>>b[j];
            }
            cout<<max(solve(nums, b, x), solve(nums, b, x-1))<<endl;
        }
    }
}