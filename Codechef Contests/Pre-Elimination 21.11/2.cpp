#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int lis(vector<int>& v){
    int n = v.size();
    vector<int> dp(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]>=v[j] && dp[i]<dp[j]+1){
                dp[i] = dp[j]+1;
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> A(n);
        unordered_map<int, int> m2;
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        sort(A.begin(), A.end());
        
        vector<int> ans;
        unordered_map<int, vector<int>> m1;
        for(int j=n-1; j>=k-1; j--){
            m2[A[j]]+=1;
            m1[m2[A[j]]].push_back(A[j]);
        }
        for(int i=0; i<k-1; i++){
            for(auto& x: m1[k-i]){
                ans.push_back(x);
            }
            ans.push_back(A[i]);
        }

        for(auto& x: m1[1]){
            ans.push_back(x);
        }

        if(lis(ans)==k and ans.size()==n){
            for(auto& x: ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        do{
            if(lis(A)==k){
                for(int i=0;i<n;i++)
                    cout<<A[i]<<" ";
                break;
            }
        }while(next_permutation(A.begin(), A.end()));
    } 
}