#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

bool check(int val, int n) {
    int x=ceil(log(val)/log(n));
    int y=pow(n,x);
    // cout<<y<<" "<<val<<" "<<y-y/n<<endl;
    if(y>x and y-y/n<val) {
        return 0;
    }
    return 1;
}
string solve(vector<int>& nums) {
    int n=nums.size();
    for(int i=0; i<n; i++) {
        if(check(nums[i], n)) {
            return "Alice";
        }
    }
    return "Bob";
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
        cout<<solve(nums)<<endl;
    }
}