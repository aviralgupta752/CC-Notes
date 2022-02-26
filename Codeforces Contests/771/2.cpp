#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool check(vector<int>& nums) {
    vector<int> o, e;
    int n=nums.size();
    for(int i=0; i<n; i++) {
        (nums[i]%2==0)?e.push_back(nums[i]):o.push_back(nums[i]);
    }
    sort(o.begin(), o.end());
    sort(e.begin(), e.end());
    int m=o.size(), p=e.size();
    for(int i=n-1; i>=0; i--) {
        if(nums[i]%2==0) {
            if(nums[i] == e[p-1]) {
                p--;
            }
            else {
                return 0;
            }
        }
        else {
            if(nums[i] == o[m-1]) {
                m--;
            }
            else {
                return 0;
            }
        }
    }

    return 1;
}
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
        if(check(nums)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}