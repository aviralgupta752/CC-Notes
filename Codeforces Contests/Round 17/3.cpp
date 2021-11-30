#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first<b.first){
        return 1;
    }
    else if(a.first==b.first){
        return a.second>b.second;
    }
    else{
        return 0;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>> v;
        int x, y;
        for(int i=0; i<n; i++){
            cin>>x>>y;
            v.push_back({y, x});
        }
        // sort(v.begin(), v.end(), cmp);
        // for(int i=0; i<n; i++){
        //     cout<<v[i].first<<" "<<v[i].second<<"\n";
        // }
        // vector<int> dp(n, 1);
        // int ans=0;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<i; j++){
        //         if(v[i].first>=dp[j] and v[j].second>=1){
        //             dp[i] = max(dp[i], dp[j]+1);
        //             v[i].second = min(v[i].second, v[j].second-1);
        //         }
        //     }
        //     // cout<<dp[i]<<" ";
        //     ans=max(ans, dp[i]);
        // }
        // cout<<ans<<"\n";

        vector<pair<int, int>> tail(n);
        vector<int> mim(n);
        tail[0]=v[0];
        mim[0]=v[0].second;
        int l=1;
        for(int i=1; i<n; i++){
            int lo=0, hi=l, ans=-1;
            while(lo<=hi){
                int mid = (lo+hi)/2;
                if(v[i].first>=mid and mim[mid]>=1){
                    ans=mid;
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                }
            }
            if(lo==hi){
                tail[l++]=v[i];
            }
            else if(ans!=-1){
                tail[ans]=v[i];
                if(ans>0)
                    mim[ans]=min(mim[ans], v[ans-1].second-1);
            }
        }
        cout<<l<<"\n";
    }
}