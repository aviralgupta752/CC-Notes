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
        cout<<n<<" ";
        for(int i=1; i<n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}