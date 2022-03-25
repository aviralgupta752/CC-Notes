#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;


void solve(vector<vector<int>>& nums) {
    int n=nums.size(), m=nums[0].size();
    if(nums[0][0]==1) {
        cout<<-1<<endl;
        return;
    }
    vector<vector<int>> ans;
    for(int i=n-1; i>=0; i--) {
        for(int j=m-1; j>=0; j--) {
            if(nums[i][j]==1) {
                if(j)
                    ans.push_back({i+1,j,i+1,j+1});
                else
                    ans.push_back({i,j+1,i+1,j+1});
            }
        }
    }
    // reverse(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    for(auto& x: ans) {
        for(auto& y:x) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
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
        solve(nums);
    }
}