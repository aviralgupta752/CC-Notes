#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        if(m<n){
            swap(n,m);
        }
        if(m==1 and n==1){
            cout<<"0\n";
        }
        else if(m==1 or n==1){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }
}