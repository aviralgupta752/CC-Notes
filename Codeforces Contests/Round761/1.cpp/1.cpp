#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;
        int n=s.size();
        sort(s.begin(), s.end());
        int cc=0, cb=0, ca=0;
        for(int i=0; i<n; i++){
            if(s[i]=='c'){
                cc++;
            }
            else if(s[i]=='b'){
                cb++;
            }
            else if(s[i]=='a'){
                ca++;
            }
        }
        int val=min(cc, cb);
        // cout<<s<<endl;
        if(t=="abc" and ca>0){
            int j=0;
            for(int i=0; i<n and cc>0; i++){
                if(s[i]=='b'){
                    s[i]='#';
                    cc--;
                }
            }
            // cout<<s<<endl;
            for(int i=n-1; i>=0 and cb>0; i--){
                if(s[i]=='c'){
                    s[i]='b';
                    cb--;
                }
            }
            // cout<<s<<endl;
            for(int i=0; i<n; i++){
                if(s[i]=='#'){
                    s[i]='c';
                }
            }
        }
        cout<<s<<endl;
    }
}