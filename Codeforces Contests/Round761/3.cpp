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
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        vector<int> v;
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            if(nums[i]<=n){
                m[nums[i]]=1;
            }
            else{
                v.push_back(ceil(nums[i]/2.0)-1);
            }
        }
        // sort(v.begin(), v.end());
        int ans=0, can=0, p=m.size();
        for(int i=1; i<=n; i++){
            if(m[i]==1){
                continue;
            }
            auto it=lower_bound(v.begin(), v.end(), i);
            if(it!=v.end()){
                ans+=1;
                v.erase(it);
            }
            else if(it==v.end()){
                can=-1;
            }
        }
        if(can==-1 or ans!=n-p){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}