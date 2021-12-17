#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int func(vector<int>& nums, int mid){
    int n=nums.size();
    int val=mid;
    for(int i=1; i<n; i++){
        val+=min(mid, nums[i]-nums[i-1]);
    }
    return val;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, h;
        cin>>n>>h;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        sort(nums.begin(), nums.end());
        int ans=0, lo=0, hi=1e18;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(func(nums, mid)>=h){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}