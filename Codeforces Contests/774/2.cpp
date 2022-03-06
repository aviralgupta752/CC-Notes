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
        for(int i=0; i<n; i++) {
            cin>>nums[i];
        }
        sort(nums.begin(), nums.end());
        int i=1, j=n-1, ans=0;
        int s1=nums[0], s2=0;
        while(i<j) {
            s1+=nums[i];
            s2+=nums[j];
            if(s2>s1){
                ans=1;
                break;
            }
            i++, j--;
        }
        // cout<<ans<<endl;
        cout<<(ans?"YES":"NO")<<endl;
    }
}