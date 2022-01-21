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
        if(n==1){
            cout<<k<<endl;
        }
        else{
            vector<int> nums(n);
            iota(nums.begin(), nums.end()-1, 1);
            int xo=0;
            for(auto& x: nums){
                xo=(xo^x);
            }
            nums[n-1]=(xo^k);

            nums[n-1] |= (1<<29);
            nums[0] |= (1<<29);

            nums[0] |= (1<<28);
            nums[1] |= (1<<28);

            xo=0;
            unordered_map<int, int> m;
            for(auto& x: nums){
                xo=(xo^x);
                m[x]+=1;
                // cout<<x<<" ";
            }
            cout<<endl;
            cout<<xo<<" "<<(m.size()==n)<<endl;
        }
    }
}