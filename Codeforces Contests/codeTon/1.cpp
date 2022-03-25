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
        int n;
        cin>>n;
        
        vector<int> nums(n);
        int c1=0, c0=0;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            if(nums[i]==1) {
                c1++;
            }
            else if(nums[i]==0) {
                c0++;
            }
        }
        sort(nums.begin(), nums.end());
        if(c1==0) {
            cout<<"YES"<<endl;
            continue;
        } 
        else {
            if(c0>0) {
                cout<<"NO"<<endl;
                continue;
            }
            bool tmp=0;
            for(int i=1; i<n; i++) {
                if(nums[i]-nums[i-1]==1) {
                    tmp=1;
                    break;
                }
            }
            cout<<(!tmp?"YES":"NO")<<endl;
        }
    }
}