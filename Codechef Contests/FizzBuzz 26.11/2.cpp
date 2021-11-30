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

        int w=0, b=0;
        for(int i=1; i<n; i++){
            if(s[i]!=s[i-1]){
                if(s[i]=='B')
                    w++;
                else
                    b++;
            }
        }
        if(s[n-1]=='W')
            w++;
        else
            b++;
        cout<<min(w,b)<<"\n";
    }
}