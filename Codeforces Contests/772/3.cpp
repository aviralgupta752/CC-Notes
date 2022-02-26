#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(vector<int>& nums) {
    int n=nums.size();
    if(nums[n-2]>nums[n-1]) {
        cout<<-1<<endl;
        return;
    }
    
    int mim=min(nums[n-2], nums[n-1]);
    int id=((mim==nums[n-2])?n-2:n-1);
    int mxm=nums[n-1];
    int ans=0;
    vector<vector<int>> fa;
    for(int i=n-3; i>=0; i--) {
        if(nums[i]>nums[i+1]){
            if(nums[i+1]-mxm<=nums[i+1]){
                ans+=1;
                nums[i]=mim-mxm;
                fa.push_back({i, id, n-1});
                mim=min(mim, nums[i]);
                id=((mim==nums[i])?i:id);
            }
            else {
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<ans<<endl;
    for(auto& x: fa) {
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    }
    // for(auto& x: nums) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
}
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
        solve(nums);
    }
}