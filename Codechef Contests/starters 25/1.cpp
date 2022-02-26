#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool check(vector<int>& nums) {
    int n=nums.size();
    map<int, int> mp;
    for(auto x: nums) {
        mp[x]+=1;
        if(mp[x]>=2){
            mp[x]=2;
        }
    }
    for(int i=0; i<n/2; i++) {
        if(mp[i]==0) 
            return 1;
        else if(mp[i]==1) {
            return 0;
        }
    }
    return 1;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> nums(2*n);
        for(int i=0; i<2*n; i++) {
            cin>>nums[i];
        }
        if(check(nums)) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}