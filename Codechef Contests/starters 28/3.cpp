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
        string tmp=s;
        sort(tmp.begin(), tmp.end());
        if(k==1) {
            cout<<s<<endl;
        }
        else if(tmp==s or k>=26) {
            cout<<tmp<<endl;
        }
        else {
            string ans="";
            vector<int> vis(n);
            for(int i=0; i<k-1; i++) {
                char first='#';
                int last=-1;
                for(int j=0; j<n; j++) {
                    if(vis[j]==1) {
                        continue;
                    }
                    if(s[j]!='a'+i and first=='#') {
                        first=s[j];
                    }
                    if(s[j]=='a'+i) {
                        ans+=s[j];
                        last=j;
                        vis[j]=1;
                    }
                }
                if(last==-1) {
                    continue;
                }
                for(int j=last+1; j<n; j++) {
                    if(s[j]<=first and vis[j]==0) {
                        ans+=s[j];
                        vis[j]=1;
                    }
                }
                cout<<ans<<" ";
            }
            for(int i=0; i<n; i++) {
                if(vis[i]==0) {
                    ans+=s[i];
                }
            }
            cout<<ans<<endl;
        }
    }
}