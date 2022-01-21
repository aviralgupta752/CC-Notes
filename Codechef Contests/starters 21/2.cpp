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
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int ans=0;
        for(int i=0; i<31; i++){
            int val=(1<<i);
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[j]&val){
                    cnt++;
                }
            }
            if(cnt>1){
                ans |= val;
            }
        }
        cout<<ans<<endl;
    }
}