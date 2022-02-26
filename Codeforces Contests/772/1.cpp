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
        vector<int> v(31);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            for(int j=0; j<30; j++) {
                if(nums[i]&(1<<j)) 
                    v[j]=1;
            }
        }
        int ans=0;
        for(int j=0; j<30; j++) {
            if(v[j]==1) {
                ans|=(1<<j);
            }
        }
        cout<<ans<<endl;
    }
}