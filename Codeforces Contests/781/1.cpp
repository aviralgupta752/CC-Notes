#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) debug(x);

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        map<int, int> mp;
        int mx=0;
        for(int i=0;i<n;i++) {
            cin>>nums[i]; 
            mp[nums[i]]++;
            mx=max(mx, mp[nums[i]]);
        }

        int c=mx;
        int steps=0;
        while(c<n) {
            steps+=1+min(c, n-c);
            c+=c;
        }
        cout<<steps<<endl;
    }
}