#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
map<pair<int,int>, int> dp;
bool func(vector<int>& nums, int i, int j, int val){
    if(dp.find({i,j})!=dp.end()){
        return dp[{i,j}];
    }
    if(i>j){
        return dp[{i, j}] = 1;
    }
    else if(nums[i]==nums[j]){
        return dp[{i, j}] = func(nums, i+1, j-1, val);
    }
    else{        
        bool ans=false;
        if(val==-1 or nums[i]==val){
            ans=func(nums, i+1, j, nums[i]);
        }
        if(val==-1 or nums[j]==val){
            ans = ans or func(nums, i, j-1, nums[j]);
        }
        return dp[{i, j}] = ans;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        dp.clear();
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        if(func(nums, 0, n-1, -1)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}