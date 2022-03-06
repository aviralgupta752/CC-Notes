#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(int n) {
    int f=n, l=2*n;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            cout<<f<<" ";
            f-=1;
        }
        else {
            cout<<l<<" ";
            l-=2;
        }
    }
    cout<<endl;
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