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
        
        if(n%2==1) {
            for(int i=0; i<n; i++) {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
        else {
            if(n==2) {
                cout<<-1<<endl;
            }
            else {
                cout<<1<<" "<<n<<" ";
                for(int i=2; i<n-1; i++) {
                    cout<<i<<" ";
                }
                cout<<n-1<<endl;
            }
        }
    }
}