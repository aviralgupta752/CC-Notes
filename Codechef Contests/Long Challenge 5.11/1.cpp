#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        if((x+2*y)%2==0 and (y%2==0 or (y%2==1 and (x%2==0 and x>0)))){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}