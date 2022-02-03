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
        
        vector<int> nums(n+1);
        for(int i=1; i<=n; i++) {
            cin>>nums[i];
        }
        int val=nums[n];
        int i=n-1, ans=0;
        while(i>0) {
            if(nums[i]!=val) {
                int l=n-i;
                ans+=1;
                i-=l;
            }
            else{
                i-=1;
            }
        }
        cout<<ans<<endl;
    }
}