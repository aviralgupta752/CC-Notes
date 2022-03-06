#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int solve(int n) {
    int c=0;
    while(n) {
        if(n%2) c++;
        n/=2;
    }
    return c;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> fact(15);
        fact[0]=1;
        for(int i=1; i<15; i++) {
            fact[i]=fact[i-1]*i;
        }
        int ans=solve(n);
        for(int i=0; i<(1<<15); i++) {
            int mask=0, c=0;
            for(int j=0; j<15; j++) {
                if(i&(1<<j)) {
                    mask+=fact[j];
                    c+=1;
                }
            }
            if(n>=mask) {
                ans=min(ans, c+solve(n-mask));
            }
        }
        cout<<ans<<endl;
    }
}