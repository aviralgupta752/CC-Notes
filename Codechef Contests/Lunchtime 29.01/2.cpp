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
        vector<int> v(n), tmp(n);
        for(int i=0; i<n; i++) {
            v[i] = (10-(s[i]-'0'))%10;
        }

        int i=0; 
        int ans=0, steps=0;
        for(int i=0; i<n; i++) {
            if(i==0) {
                steps=v[i];
            }
            else{
                if(v[i]>v[i-1]){
                    steps+=10;
                }
            }
            if(k>=steps) {
                ans=i+1;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}