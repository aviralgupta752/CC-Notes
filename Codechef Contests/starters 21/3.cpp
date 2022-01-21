#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int prime(int n){
    int cnt=0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cnt++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1){
        cnt++;
    }
    return cnt;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        int cnt=prime(m);
        int ans=0;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                int tmp=n/i;
                if(cnt>=tmp){
                    ans=max(ans, tmp);
                }
                tmp=i;
                if(cnt>=tmp){
                    ans=max(ans, tmp);
                }
                // cout<<i<<" "<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }
}