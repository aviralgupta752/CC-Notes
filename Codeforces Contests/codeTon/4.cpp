#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

int solve(int n) {
    for(int k=2; k<=ceil(log2(n)); k++) {
        int val=n-k*(k-1)/2;
        if(val<0) {
            break;
        }
        if(val%k==0 and val/k>0) {
            return k;
        }
    }
    return -1;
}

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1) {
            cout<<2<<endl;
        }
        else {
            cout<<solve(n)<<endl;
        }
    }
}