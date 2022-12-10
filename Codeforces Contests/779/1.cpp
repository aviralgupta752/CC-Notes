#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        vector<int> v;
        int ans=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                v.push_back(i);
            }
        }
        for(int i=0; i+1<v.size(); i++) {
            if(v[i+1]-v[i]>2) {
                continue;
            }
            else if(v[i+1]-v[i]==2) {
                ans+=1;
            }
            else if(v[i+1]-v[i]==1) {
                ans+=2;
            }
        }
        cout<<ans<<endl;
    }
}