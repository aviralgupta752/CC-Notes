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
        vector<vector<int>> nums(n, vector<int>(3, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<3; j++){
                cin>>nums[i][j];
            }
        }
        vector<int> ans;
        int mim=nums[0][0], mxm=nums[0][1];
        ans.push_back(nums[0][2]);
        unordered_map<int, int> m;
        m[mim]=nums[0][2];
        m[mxm]=nums[0][2];
        for(int i=1; i<n; i++){
            if(nums[i][1]>mxm){
                if(nums[i][0]<=mim){
                    ans.push_back(nums[i][2]);
                }
                else{
                    ans.push_back(nums[i][2]+m[mim]);
                }
            }
            else if(nums[i][1]==mxm){
                if(nums[i][0]>mim){
                    ans.push_back(min(ans.back(), m[mim]+nums[i][2]));
                }
                else if(nums[i][0]==mim){
                    ans.push_back(min(ans.back(), nums[i][2]));
                }
                else{
                    ans.push_back(nums[i][2]);
                }
            }
            else{
                // cout<<nums[i][0]<<" "<<nums[i][1]<<endl;
                if(nums[i][0]<mim){
                    ans.push_back(m[mxm]+nums[i][2]);
                }
                else if(nums[i][0]==mim){
                    ans.push_back(min(ans.back(), nums[i][2]+m[mxm]));
                }
                else{
                    ans.push_back(min(ans.back(), nums[i][2]+m[mim]+m[mxm]));
                }
            }
            mxm=max(mxm, nums[i][1]);
            mim=min(mim, nums[i][0]);
            m[nums[i][0]]=nums[i][2];
            m[nums[i][1]]=nums[i][2];
        }

        for(auto& x: ans){
            cout<<x<<"\n";
        }
    }
}