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
        int cz=0, co=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cz++;
            }
            else{
                co++;
            }
        }
        co=min(co, cz);
        if(co%2==0){
            cout<<"Bob\n";
        }
        else{
            cout<<"Alice\n";
        }
    }
}