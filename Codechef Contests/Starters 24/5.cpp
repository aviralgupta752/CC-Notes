#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        string s;
        cin>>n>>s>>m;

        vector<vector<int>> mp(26);
        for(int i=0; i<n; i++) {
            mp[s[i]-'a'].push_back(i);
        }

        int ans=INT_MAX;
        
        for(int x: mp[0]) {
            int st=x, i=1, l=1;
            if(st+m>n) {
                break;
            }
            while(l<m) {
                int it=upper_bound(mp[i].begin(), mp[i].end(), st)-mp[i].begin();
                
                if(it!=mp[i].size()) {
                    st=mp[i][it];
                    if(st+m-l>n){
                        break;
                    }
                    ++l;
                    i=(i+1)%26;
                }
                else{
                    break;
                }
            }
            if(l==m) {
                ans=min(ans, st-x+1);
            }
        }
        cout<<((ans==INT_MAX)?-1:ans-m)<<endl;
    }
}