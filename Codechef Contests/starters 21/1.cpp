#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        int nx=(n+1)/2, ny=(n+1)/2;
        if((abs(nx-x)+abs(ny-y))%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}