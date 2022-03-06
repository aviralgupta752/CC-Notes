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
        int s=-(n*(n+1))/2;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            s+=nums[i];
        }
        // cout<<s<<" ";
        vector<int> v;
        for(int i=1; i*i<=s; i++) {
            if(s%i==0) {
                v.push_back(i);
                v.push_back(s/i);
            }
        }
        bool cha=false;
        v.push_back(n+1);
        for(auto& x: v) {
            vector<int> tmp(n+1);
            for(int i=0; i<n; i++){ 
                if(nums[i]%x<=n)
                    tmp[nums[i]%x]=1;
            }
            int c=0;
            for(int i=1; i<=n; i++){
                c+=tmp[i];
            }
            
            if(c==n) {
                cout<<"YES "<<x<<endl;
                cha=1;
                break;
            }
        }
        if(cha==false) {
            cout<<"NO"<<endl;
        }
    }
}