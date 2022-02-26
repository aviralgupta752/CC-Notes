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
        
        int ans=0, c=0;
        for(int i=1; i<n-1; i++) {
            if(nums[i]==1) {
                c+=1;
            }
            ans+=ceil(nums[i]/2.0);
        }
        if(c==n-2 or (n==3 and nums[1]%2==1)) {
            cout<<-1<<endl;
        }
        else
            cout<<ans<<endl;
    }
}