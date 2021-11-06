#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int func(vector<int>& nums){
    int n = nums.size(), ans=0;
    int mxm=*max_element(nums.begin(), nums.end());
    for(int i=0; i<63; i++){
        int val=(1LL<<i);
        int cnt=0;
        for(int j=0; j<n; j++){
            if((nums[j]+ans)&val) 
                cnt++;
        }
        if(cnt%2==1){
            ans+=val;
        }
        // cout<<ans<<" "<<mxm<<endl;
        if(ans>mxm){
            return -1;
        }
    }
    return ans;
}
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
        // int ans=0;
        cout<<func(nums)<<endl;
    }
}