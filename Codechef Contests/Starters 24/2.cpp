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
        int a=0, b=0, c=0, tmp0=0, tmp1=0;
        for(int i=0; i<30; i++) {
            int val=(1<<i);
            if(n&val) {
                if(tmp1%3==0){
                    a|=val;
                    b|=val;
                }
                else if(tmp1%3==1){
                    b|=val;
                    c|=val;
                }
                else if(tmp1%3==2){
                    a|=val;
                    c|=val;
                }
                tmp1+=1;
            }
            else {
                if(tmp0%3==0){
                    a|=val;
                }
                else if(tmp0%3==1){
                    b|=val;
                }
                else if(tmp0%3==2){
                    c|=val;
                }
                tmp0+=1;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        // cout<<((a|b)&(b|c)&(c|a))<<endl;
    }
}