#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        else if(k==1) {
            cout<<-1<<endl;
        }
        else{
            for(int i=0; i<k-1; i++) {
                cout<<i+1<<" ";
            }
            for(int i=n; i>=k; i--) {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}