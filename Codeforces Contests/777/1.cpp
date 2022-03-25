#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<x<<" "; cout<<endl;

string solve(int n, int v) {
    int s=0;
    string ans="";
    while(s<n) {
        s+=1+v;
        ans+='1'+v;
        v=1-v;
    }
    if(s==n) {
        return ans;
    }
    return "";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        cout<<max(solve(n, 0), solve(n,1))<<endl;
    }
}