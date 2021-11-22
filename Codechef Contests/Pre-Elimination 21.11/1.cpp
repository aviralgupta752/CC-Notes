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

        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j-i>=2){
                    int a=nums[i], b=nums[j];
                    int x=(a+b)/2;
                    int id=lower_bound(nums.begin()+i+1, nums.begin()+j, x) - nums.begin();
                    int c=-1, d=-1, mxm=0;
                    if(id>i and id<j){
                        c=nums[id];
                    }
                    if(id-1>i and id-1<j){
                        d=nums[id-1];
                    }
                    if(c!=-1){
                        mxm=(c-a)*(b-c);
                    }
                    if(d!=-1){
                        mxm=max(mxm, (b-d)*(d-a));
                    }
                    ans+=mxm;
                }
            }
        }
        cout<<ans<<endl;
    }
}