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
        
        if(y==0) {
            cout<<x<<endl;
        }
        else if(x==y) {
            cout<<2*y-1<<endl;
        }
        else{
            cout<<x+y<<endl;
        }
    }
}