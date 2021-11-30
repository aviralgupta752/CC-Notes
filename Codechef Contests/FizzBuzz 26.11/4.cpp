#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> func(vector<int>& nums, int k){
    if(k==1){
        return {0};
    }
    else{
        int n=nums.size();
        vector<int> ans(k, n-1);
        for(int i=0; i<n; i++){
            if(i+1<n){
                ans[nums[i]-1]-=1;
            }
            if(i-1>=0){
                ans[nums[i]-1]-=1;
            }
            if(i-1>=0 and i+1<n and nums[i-1]!=nums[i+1]){
                ans[nums[i]-1]+=1;
            }
        }
        return ans;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }

        vector<int> tmp;
        for(int i=0; i<n; i++){
            tmp.push_back(nums[i]);
            while(i+1<n and nums[i]==nums[i+1]){
                i+=1;
            }
        }
        vector<int> ans=func(tmp, k);
        for(auto& x: ans){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}