#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<x<<" "; cout<<endl;

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        vector<int> nums(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        int ans=0, sum=0;
        for(int i=0; i<n; i++) {
            if(sum+ceil(nums[i]/2.0)<=k) {
                ans+=1;
            }
            sum+=nums[i];
        }
        cout<<ans<<endl;
    }
}