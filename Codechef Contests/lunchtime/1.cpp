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
        int s=0;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            s+=nums[i];
            if(i) {
                nums[i]+=nums[i-1];
            }
        }
        int ans=s;
        for(int i=0; i<n; i++) {
            ans=min(ans, max(nums[i], s-nums[i]));
            // cout<<ans<<" ";
        }
        cout<<ans<<endl;
    }
}