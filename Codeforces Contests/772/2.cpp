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
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        int ans=0;
        for(int i=1; i<n-1; i++) {
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1]) {
                (i==n-2)?nums[i-1]=nums[i]:nums[i+1]=max(nums[i], nums[i+2]);
                ans+=1;
            }
        }
        cout<<ans<<endl;
        for(auto& x: nums) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}