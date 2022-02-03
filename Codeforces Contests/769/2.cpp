#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(int n) {
    if(n%2==0) {
        cout<<n-1<<" "<<n-2<<" ";
        for(int i=0; i<n-2; i++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else {
        cout<<n-1<<" "<<0<<" ";
        for(int i=1; i<n-1; i++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}