#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool check(int mid, vector<int>& nums, vector<int>& cum, int ts, int n, int med){
    int a=(mid+ts)/n-nums[med];
    auto it=lower_bound(nums.begin(), nums.end(), nums[med]+a)-nums.begin();
    int x=(it-med+1)*(nums[med]+a)-(cum[it]-cum[med-1]);

    return x>mid;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        int ts=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            ts+=nums[i];
        }
        
        vector<int> cum(n+1);
        for(int i=0;i<n;i++)
            cum[i+1]=cum[i]+nums[i];
        
        int med;
        if(n%2==0){
            med=nums[n/2-1];
        }
        else{
            med=nums[n/2];
        }
        if(nums[med]==ts/n and ts%n==0){
            cout<<0<<endl;
        }
        else{
            int lo=0, hi=1e9, ans=0;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(check(mid, nums, cum, ts, n, med)){
                    ans=mid;
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            cout<<"hi"<<ans<<endl;
        }
    }
}