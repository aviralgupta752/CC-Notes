#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    vector<int> tmp(31);
    tmp[0]=1;
    for(int i=1; i<31; i++){
        tmp[i]=2*tmp[i-1];
    }
    while(t--){
        int n;
        cin>>n;
        
        vector<int> nums(n);
        vector<vector<pair<int, int>>> perm(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            for(int j=0; j<31; j++){
                int val=nums[i]/tmp[j];
                if(val<=n and val>=1){
                    perm[val-1].push_back({nums[i], i});
                }
            }
        }
        
        
        int c=0;
        vector<int> vis(n);
        for(int i=n-1; i>=0; i--){
            int sz=perm[i].size();
            for(int j=0; j<sz; j++){
                if(vis[perm[i][j].second]==0){
                    vis[perm[i][j].second]=1;
                    c++;
                    break;
                }
            }
        }
        if(c==n){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}