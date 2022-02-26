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
        
        vector<int> nums(n), mim(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        mim[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--) {
            mim[i]=min(mim[i+1], nums[i]);
        }
        int mxm=nums[0];
        int ans=1;
        for(int i=1; i<n; i++) {
            if(nums[i]>mxm and mxm<mim[i]) {
                ans+=1;
            }
            mxm=max(mxm, nums[i]);
        }
        cout<<ans<<endl;
    }
}