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
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(s[i]=='1' and s[i+1]=='0'){
                ans=1;
                break;
            }
            if(s[i]=='1' and s[i+1]=='1'){
                ans=1;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
}