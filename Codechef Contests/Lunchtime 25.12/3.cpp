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
        for(int i=0;i<n;i++)
            cin>>nums[i];
        

        vector<int> tmp=nums;
        sort(tmp.begin(), tmp.end());

        unordered_map<int, int> m;
        for(int i=0;i<n;i++){
            m[tmp[i]]=i+1;
        }
        vector<int> mxm(n);
        mxm[0]=m[nums[0]]-1;
        for(int i=1; i<n; i++){
            mxm[i]=max(mxm[i-1], m[nums[i]]-1);
        }

        // vector<int> big(n), small(n);
        // big[0]=small[0]=nums[0];
        // for(int i=1; i<n; i++){
        //     big[i]=max(big[i-1], nums[i]);
        //     small[i]=min(small[i-1], nums[i]);
        // }
        int ans=0, i=0;
        while(i<n){
            int j=m[nums[i]]-1;
            while(true){
                if(j<n and j==mxm[j]){
                    break;
                }
                j=mxm[j];
            }
            ans+=tmp[j]-tmp[i];
            i=j+1;
        }
        cout<<ans<<endl;
    }
}