#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,B,x,y;
        cin>>n>>B>>x>>y;
        vector<int> a(n+1);
        int ans=0;
        for(int i=1; i<=n; i++) {
            if(a[i-1]+x<=B) 
                a[i]=a[i-1]+x;
            else 
                a[i]=a[i-1]-y;
            ans+=a[i];
            // cout<<a[i]<<" ";
        } 
        cout<<ans<<endl;
    }
}