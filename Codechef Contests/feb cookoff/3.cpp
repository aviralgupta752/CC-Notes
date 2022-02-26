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
        if(s[n]=='0' or s[0]=='0') {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES\n";
        vector<int> ans;
        ans.push_back(0);
        unordered_map<int, int> mp;
        mp[0]=1;
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                ans.push_back(i);
                mp[i]=1;
            }
        }
        for(int i=0; i<n; i++) {
            if(mp.find(i)==mp.end()) {
                ans.push_back(i);
            }
        }
        for(int i=0; i<n; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}