#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<2<<" "<<n-3<<" "<<1<<endl;
        }
        else{
            int num=3;
            while(true){
                if(__gcd(1LL*num, n-num-1)==1){
                    cout<<num<<" "<<n-num-1<<" "<<1<<endl;
                    break;
                }
                num+=2;
            }
            // n-=1;
            // cout<<n/2-2<<" "<<n/2+2<<" "<<1<<endl;
        }
    }
}