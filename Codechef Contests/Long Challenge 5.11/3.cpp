#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> func(vector<int>& nums){
    unordered_map<int,int> m;
    int n=nums.size(), tmp=0;
    int mxm=*max_element(nums.begin(),nums.end());
    vector<int> ans, tmp2;
    for(int i=0; i<n; i++){
        m[nums[i]]++;
        if(m[nums[i]]>2) 
            return {-1};
        if(m[nums[i]]>1)
            tmp=1;
    }
    if(m[mxm]>=2) 
        return {-1};
    if(tmp==0){
        sort(nums.rbegin(), nums.rend());
        return nums;
    }
    else{
        for(int i=0; i<n; i++){
            if(m[nums[i]]==2){
                m[nums[i]]--;
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<n; i++){
            if(m[nums[i]]==1){
                m[nums[i]]--;
                tmp2.push_back(nums[i]);
            }
        }
        sort(tmp2.rbegin(), tmp2.rend());
        ans.insert(ans.end(), tmp2.begin(), tmp2.end());
        return ans;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++)
            cin>>nums[i];
        
        vector<int> ans=func(nums);
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}