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
        
        for(int i=1; i<n; i++) {
            if(__gcd(nums[i], nums[i-1])==1) {
                int val=1;
                val=((i+1<n)?nums[i+1]:1);
                nums[i]=((nums[i-1]*val)/__gcd(nums[i-1], val));
                if(nums[i]>1000000) {
                    nums[i]=2;
                    nums[i-1]*=2;
                }
            }
        }
        
        bool check=0;
        
        for(auto& i:nums){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}