#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

bool check(vector<vector<int>>& nums) {
    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            if((nums[i][j] & nums[i-1][j-1])==1 and nums[i-1][j]+nums[i][j-1]==1) 
                return 1;
        }
    }
    return 0;
}
string solve(vector<vector<int>>& nums) {
    int n=nums.size(), m=nums[0].size();
    if(check(nums)) {
        return "NO";
    }
    for(int i=0; i<n; i++) {
        reverse(nums[i].begin(), nums[i].end());
    }
    if(check(nums)) {
        return "NO";
    }
    // debug2(nums);
    return "YES";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> v;
        for(int i=0; i<n; i++) {
            string x;
            cin>>x;
            v.push_back(x);
        }
        vector<vector<int>> nums(n, vector<int>(m));
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                nums[i][j]=v[i][j]-'0';
            }
        }
        cout<<solve(nums)<<endl;
    }
}