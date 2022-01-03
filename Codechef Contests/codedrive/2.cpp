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
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        int ans=0;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        long double avg=sum*1.0/n;
        cout<<(int)avg<<endl;
    }
}