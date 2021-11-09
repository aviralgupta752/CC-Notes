#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> nums;
        int n=s.size(), c=1;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                c+=1;
            }
            else{
                nums.push_back(c);
                c=1;
            }
        }
        nums.push_back(c);
        int m=nums.size();
        int ans1=0, ans2=0;
        for(int i=0; i<m; i++){
            cout<<nums[i]<<" ";
            if(i%2==0){
                ans1+=((nums[i]>=2)?2: 1);
            }
            else{
                ans2+=((nums[i]>=2)?2: 1);
            }
        }
        cout<<min(ans1, ans2)<<endl;
    }
}