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
        int ans=0, mxm=INT_MIN, mim=INT_MAX;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            nums[i]=abs(nums[i]);
            if(i%2==0) {
                ans+=nums[i];
                mim=min(mim, nums[i]);
            }
            else {
                ans-=nums[i];
                mxm=max(mxm, nums[i]);
            }
            // cout<<
        }
        // cout<<ans<<" "<<mxm<<" "<<mim<<endl;
        int val=ans+2*(mxm-mim);
        cout<<max(ans, val)<<endl;
    }
}