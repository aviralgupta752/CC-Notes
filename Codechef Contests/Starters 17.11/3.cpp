#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int count(string s){
    int c=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            c+=1;
        }
    }
    return c;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        map<int, vector<string>> mp;
        for(int i=0; i<n; i++){
            cin>>s;
            mp[count(s)].push_back(s);
        }
        s="";
        for(auto& x: mp){
            for(auto& y: x.second){
                s+=y;
            }
        }
        // cout<<s<<endl;
        n=s.size();
        int ans=0, c=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                c+=1;
            }
            else{
                ans+=c;
            }
        }
        cout<<ans<<endl;
    }
}