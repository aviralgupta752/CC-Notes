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
        int c1=0, id=-1;
        for(int i=0; i<n; i++) {
            cin>>nums[i];
            if(nums[i]==1) {
                c1+=1;
                id=i;
            }
        }
        if(c1>1 or id==-1) {
            cout<<"NO\n";
            continue;
        }
        bool tmp=0;
        vector<int> v;
        for(int i=id; i<n; i++) {
            v.push_back(nums[i]);
        }
        for(int i=0; i<id; i++) {
            v.push_back(nums[i]);
        }

        for(int i=1; i<n; i++) {
            if(v[i]-v[i-1]>1) {
                tmp=1;
                break;
            }
        }
        cout<<(tmp?"NO\n":"YES\n");
    }
}