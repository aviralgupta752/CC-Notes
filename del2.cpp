#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) debug(x);

int32_t main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        vector<int> v={2, 2^x, 2^y};
        sort(v.begin(), v.end());
        debug(v);
    }
}