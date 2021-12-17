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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        sort(a, a+n);
        int k=n-1;
        for(int i=0; i<n/2; i++){
            cout<<a[k--]<<" "<<a[0]<<"\n";
        }
    }
}