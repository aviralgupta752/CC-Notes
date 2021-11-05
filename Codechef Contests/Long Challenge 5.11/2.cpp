#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n;
        int ans=0;
        for(int i=0; i<n; i++){
            cin>>x;
            ans += (x%2);
        }
        cout<<ans/2<<endl;
    }
}