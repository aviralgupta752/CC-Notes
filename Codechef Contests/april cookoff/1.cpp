#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) debug(x);

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n), r(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        for(int i=0;i<n;i++){
            cin>>r[i];
        }

        vector<pair<int, int>> v(n), uv(n);
        int mxm=0;
        for(int i=0; i<n; i++) {
            int val=min(l[i], r[i]);
            mxm=max(mxm, val);
            if(i) {
                v[i]={mxm, v[i-1].second+val};
            }
            else {
                v[i]={mxm, val};
            }
        }
        mxm=0;
        for(int i=n-1; i>=0; i--) {
            int val=min(l[i], r[i]);
            mxm=max(mxm, val);
            if(i!=n-1) {
                uv[i]={mxm, uv[i+1].second+val};
            }
            else {
                uv[i]={mxm, val};
            }
        }

        int ans=LLONG_MAX;
        v[0].second=r[0];
        uv[n-1].second=l[0];
        for(int i=0; i<n; i++) {
            int a=0, b=0;
            a=((i-1>=0)?v[i-1].second-v[i-1].first+l[i]:0);
            b=((i+1<n)?uv[i+1].second-uv[i+1].first+r[i]:0);

            cout<<a<<" "<<b<<" "<<i<<endl;
            ans=min(ans, a+b);
        }


        // for(auto& x: v) {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        // for(auto& x: uv) {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        cout<<ans<<endl;
    }
}