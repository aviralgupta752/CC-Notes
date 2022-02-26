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
        
        vector<int> nums(n), mim(n, -1);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        mim[n-1]=n-1;
        for(int i=n-2; i>=0; i--) {
            if(nums[mim[i+1]]<nums[i]){
                mim[i]=mim[i+1];
            }
            else {
                mim[i]=i;
            }
        }
        for(int i=0; i<n; i++) {
            if(nums[i]>nums[mim[i]]) {
                reverse(nums.begin()+i, nums.begin()+mim[i]+1);
                break;
            }
        }
        for(int i=0; i<n; i++) {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
}