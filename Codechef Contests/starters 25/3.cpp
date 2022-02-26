#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
        int x, m;
        cin>>x>>m;
        int tmp=x, po=0;
        while(tmp) {
            po+=1;
            tmp/=2;
        }
        // cout<<(x&(x-1))<<" "<<po<<endl;
        if((x&(x-1)) == 0) {
            cout<<max(0LL, m-po+1)<<endl;
        }
        else {
            cout<<max(0LL, m-po)<<endl;
        }
    }
}