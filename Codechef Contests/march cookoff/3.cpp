#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string solve(int n, int x) {
    for(int i=1; i<=n; i++) {
        if(x%i==0) {
            int len=i, mim=x/i;
            if(mim<1 or mim>n) {
                continue;
            }
            if(n-mim+1>=len) {
                return "YES";
            }    
        }
    }
    return "NO";
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        cout<<solve(n, x)<<endl;
    }
}