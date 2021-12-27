#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        string ans=s;
        int val=k-1, t=-2;

        for(int i=0; i<k; i++){
            ans[val]=s[i];
            val+=t;
            if(val==-2){
                val=1;
                t=2;
            }
            else if(val==-1){
                val=0;
                t=2;
            }
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}