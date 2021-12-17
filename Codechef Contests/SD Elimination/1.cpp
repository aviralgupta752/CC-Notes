#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        
        sort(nums.begin(), nums.end());
        if(nums[0]+nums[n-1]<=k or n==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}