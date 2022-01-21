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
        vector<int> nums(n);
        map<int, vector<int>> mp;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            mp[nums[i]].push_back(i);
        }
        int ans=-1;
        for(auto& x: mp){
            vector<int> v=x.second;
            int sz=v.size();
            if(sz>=2){
                for(int i=0; i<sz-1; i++){
                    int tmp=v[i]-v[i+1]+n;
                    cout<<tmp<<endl;
                    ans=max(ans, tmp);
                }
            }
        }
        // cout<<ans<<endl;
    }
}