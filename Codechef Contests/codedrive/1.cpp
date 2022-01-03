#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        // int n;
        // cin>>n;
        int n;
        cin>>n;
        if(n<=2){
            cout<<"0\n";
        }
        else{
            cout<<(n-2)*10*pow(3, n-3)<<endl;
        }
    }
}