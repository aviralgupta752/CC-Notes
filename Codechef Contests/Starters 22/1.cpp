#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        
        int ans=0, num=2;
        while(k%num==0){
            ans+=1;
            k/=num;
        }
        cout<<ans<<endl;
    }
}