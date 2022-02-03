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
        string s;
        cin>>s;

        if(n>2){
            cout<<"NO\n";
        }
        else if(n<2) {
            cout<<"YES\n";
        }
        else {
            int c1=0, c0=0;
            for(auto& x: s) {
                if(x=='0') {
                    c0+=1;
                }
                else{
                    c1+=1;
                }
            }
            if(c1==c0)
                cout<<"YES\n";
            else{
                cout<<"NO\n";
            }
        }

    }
}