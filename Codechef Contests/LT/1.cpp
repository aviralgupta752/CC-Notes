#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define debug(nums) for(auto x:nums) cout<<x<<" "; cout<<endl;
#define debug2(nums) for(auto x:nums) for(auto y:x) cout<<y<<" "; cout<<endl;

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
        vector<int> odd, even;
        int c=0;
        for(int i=0; i<n; i++) {
            if(nums[i]%2==0) {
                even.push_back(nums[i]);
            }
            else {
                c+=1;
                odd.push_back(nums[i]);
            }
        }
        
        if(c<=1) {
            cout<<-1<<endl;
        }
        else if(c==n) {
            if(n%2==0) {
                for(auto& x: even) {
                    cout<<x<<" ";
                }
                for(auto& x: odd) {
                    cout<<x<<" ";
                }
                cout<<endl;
            }
            else {
                cout<<-1<<endl;
            }
        }
        else if(c%2==0) {
            for(auto& x: even) {
                cout<<x<<" ";
            }
            for(auto& x: odd) {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else {
            cout<<odd[0]<<" ";
            for(auto& x: even) {
                cout<<x<<" ";
            }
            for(int i=1; i<odd.size(); i++) {
                cout<<odd[i]<<" ";
            }
            cout<<endl;
        }
    }
}