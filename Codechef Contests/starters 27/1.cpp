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
        unordered_map<int, int> mp;
        vector<int> nums(n);
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            mp[nums[i]]+=1;
        }
        int mod=1e9+7, ans=0, s=0;
        vector<int> po(n+1);
        po[0]=1;
        for(int i=1; i<=n; i++) {
            po[i]=(2*po[i-1])%mod;
        }
        for(auto& x: mp) {
            s=(s+((po[x.second]-x.second-1)*po[n-x.second])%mod)%mod;
        }
        cout<<(po[n]-s+mod-1)%mod<<endl;
    }
}