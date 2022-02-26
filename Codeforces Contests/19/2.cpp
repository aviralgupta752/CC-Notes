#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int solve(vector<int> nums){
    int n=nums.size();
    sort(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++) {
        mp[nums[i]]++;
    }
    return mp[0]+n;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> nums(n);
        for(int i=0;i<n;i++) {
            cin>>nums[i];
        }
        
        int ans=0;
        for(int i=0; i<n; i++) {
            vector<int> v;
            for(int j=i; j<n; j++) {
                v.push_back(nums[j]);
                ans+=solve(v);
            }
        }
        cout<<ans<<endl;
    }
}