#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int c1=0, c0=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='1') c1++;
            else c0++;
        }
        if(c1==c0) {
            cout<<c0-1<<endl;
        }
        else{
            cout<<min(c0,c1)<<endl;
        }
        
    }
}