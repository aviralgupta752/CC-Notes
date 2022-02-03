#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int count(int n) {
    int c=0;
    while(n) {
        n/=2;
        c+=1;
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

        int ans=0, i=n;
        while(i>0) {
            int bits=count(i);
            int num=(1<<bits)-1;
            
            if(num==i) {
                i-=1;
                continue;
            }

            ans+=2*num*((2*i-num+1)/2);
            i=num-i-1;
        }
        cout<<ans<<endl;
    }
}