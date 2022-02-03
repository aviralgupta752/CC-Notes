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
        if(n%7==0) {
            cout<<n<<endl;
        }
        else{
            n/=10;
            int ans=n*10+(7-(n*10)%7)%7;
            
            if(ans==0){
                cout<<7<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
}