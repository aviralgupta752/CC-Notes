#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;
int bs(vector<vector<int>>& tmp, int val) {
    int n=tmp.size();
    int lo=0, hi=n-1, ans=n;
    while(lo<=hi) {
        int mid=(lo+hi)/2;
        if(tmp[mid][0]>val) {
            ans=mid;
            hi=mid-1;
        }
        else {
            lo=mid+1;
        }
    }
    return ans;
}
int32_t main(){
    fastio;
    int t=1;
    // cin>>t;
    while(t--){
        int n, C;
        cin>>n>>C;
        vector<vector<int>> v(n, vector<int>(2));
        vector<vector<int>> tmp;
        for(int i=0; i<n; i++) {
            int x, y, z;
            cin>>v[i][0]>>x>>y;
            v[i][1]=x*y;
            int val=C/v[i][0];
            tmp.push_back({val*v[i][1], i});
        }
        sort(tmp.begin(), tmp.end());
        // for(auto& x: tmp) {
        //     cout<<x[0]<<" "<<x[1]<<endl;
        // }
        int m;
        cin>>m;
        for(int i=0; i<m; i++) {
            int x, y;
            cin>>x>>y;
            int val=x*y;
            // int idx=upper_bound(tmp.begin(), tmp.end(), {val, -1}) - tmp.begin();
            int idx = bs(tmp, val);

            int ans=LLONG_MAX;
            for(int k=idx; k<n; k++) {
                int j=tmp[k][1];
                // cout<<j<<endl;
                int c=val/v[j][1]+1;
                if(c<=C/v[j][0]) {
                    ans=min(ans, c*v[j][0]);
                }
            }
            cout<<(ans==LLONG_MAX?-1:ans)<<" ";
        }
    }
}