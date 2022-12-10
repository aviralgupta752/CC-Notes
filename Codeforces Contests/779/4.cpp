#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        vector<int> nums(r-l+1);
        int n=r-l+1;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }

        vector<int> v1(30), v2(30);
        for(int i=0; i<30; i++) {
            int val=(1<<i);
            for(int j=0; j<n; j++) {
                if(val&nums[j]) {
                    v1[i]++;
                }
                if(val&(l+j)) {
                    v2[i]++;
                }
            }
        }
        int ans=0;
        for(int i=0; i<30; i++) {
            if(v1[i]!=v2[i]) {
                ans|=(1<<i);
            }
        }
        vector<int> v;
        for(int i=0; i<n; i++) {
            v.push_back(nums[i]^ans);
        }
        sort(v.begin(), v.end());
        cout<<ans<<endl;
        // int tmp=0;
        // for(int i=0; i<n; i++) {
        //     if(v[i]!=l+i) {
        //         tmp=1;
        //         break;
        //     }
        // }
        // cout<<((tmp)?(ans^1):ans)<<endl;
    }
}