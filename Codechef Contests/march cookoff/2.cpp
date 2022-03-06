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
        int c=0;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            if(nums[i]==0) {
                c+=1;
            }
        }
        cout<<max(c, n-c)<<endl;
    }
}