#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" ";cout<<endl;

vector<int> lis(vector<int>& nums) {
    int n=nums.size();
    vector<int> tail(n);
    tail[0]=nums[0];
    int l=1;
    vector<int> v(n);
    v[0]=1;
    for(int i=1; i<n; i++){
        auto it=lower_bound(tail.begin(), tail.begin()+l, nums[i]);
        if(it==tail.begin()+l)
            tail[l++]=nums[i];
        else
            *it=nums[i];
        v[i]=l;
    }
    return v;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        int mxm=0;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            mxm=max(mxm, nums[i]);
        }
        vector<int> l=lis(nums);

        reverse(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            nums[i]=mxm-nums[i];
        }
        vector<int> r=lis(nums);
        reverse(r.begin(), r.end());


        // debug(l);
        // debug(r);
        int ans=max(l[n-1], r[0]);
        for(int i=0; i<n-1; i++) {
            ans=max(ans, l[i]+r[i+1]);
        }
        cout<<ans<<endl;
    }
}