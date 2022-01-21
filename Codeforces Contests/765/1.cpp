#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int ans=0;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<int> tmp(31);
        for(int i=0; i<31; i++){
            int val=(1<<i);
            for(auto& x: nums){
                if(x&val) 
                    tmp[i]++;
            }
            if(2*tmp[i]>n){
                ans+=val;
            }
        }
        cout<<ans<<endl;
    }
}