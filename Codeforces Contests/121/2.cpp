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

        int mxm=0;
        int n=s.size();
        int i=n-2, a=0, b=0;
        for(; i>=0; i--){
            a=s[i]-'0';
            b=s[i+1]-'0';
            if(a+b>=10){
                break;
            }
        }
        if(i!=-1){
            string ans=s.substr(0, i)+to_string(a+b);
            if(i+2<n)
                ans+=s.substr(i+2);
            cout<<ans<<endl;
        }
        else{
            
            int j=0;
            a=0, b=0;
            for(; j<n-1; j++){
                if(s[j+1]=='0'){
                    continue;
                }
                else{
                    a=s[j]-'0';
                    b=s[j+1]-'0';
                    break;
                }
            }
            string ans="";
            if(j==n-1){
                ans=s.substr(0, j-1)+to_string(s[n-1]-'0'+s[n-2]-'0');
            }
            else{
                if(j>0)
                    ans+=s.substr(0, j);
                ans+=to_string(a+b);
                if(j+2<n)
                    ans+=s.substr(j+2);
            }
            cout<<ans<<endl;
        }
    }
}