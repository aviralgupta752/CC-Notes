#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) debug(x);

int solve(int mxm, vector<int>& a, int n) {
    int e=0, o=0, es=0, os=0;
    for(int i=0; i<n; i++) {
        if(mxm-a[i]==0) {
            continue;
        }
        if((mxm-a[i])%2==0) {
            es+=mxm-a[i];
        }
        else {
            o++;
            os+=mxm-a[i];
        }
    }
    int ans=0;
    if(o>=1) {
        ans=2*(o-1);
        es=max(0LL, es-2*(o-1));
        os=os-o+1;
    }
    
    int val=es+os;
    
    int tmp=val/3;
    ans+=2*tmp;
    val=val-tmp*3;

    if(val==1) ans++;
    else if(val==2) ans+=2;
    
    return ans;
}
int32_t main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int mxm=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mxm=max(mxm, a[i]);
        }
        cout<<min(solve(mxm, a, n), solve(mxm+1, a, n))<<endl;
    }
}