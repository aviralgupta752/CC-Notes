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
        sort(tmp.begin(),tmp.end());
        int ans=0;
        for(int i=0; i<n; i++) {
            if(tmp[i]!=nums[i]){
                cout<<"YES"<<endl;
                ans=1;
                break;
            }
        }
        if(ans==0)
            cout<<"NO"<<endl;
    }
}