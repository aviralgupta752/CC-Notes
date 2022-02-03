#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<int> func;
int solve() {
    int n, k;
    cin>>n>>k;
    int dp[n+1][k+1];

    vector<int> b(n), c(n);
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }
    for(int i=0; i<n; i++) {
        cin>>c[i];
    }
    vector<int> ops(n);
    for(int i=0; i<n; i++) {
        ops[i]=func[b[i]];
    }

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=k; j++) {
            if(i==0) {
                dp[i][j]=0;
                continue;
            }
            if(ops[i-1]<=j) {
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-ops[i-1]]+c[i-1]);
            }
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    func.resize(1001, INT_MAX);
    func[1]=0;
    for(int i=1; i<=1000; i++) {
        for(int j=1; j<=i; j++) {
            int x=i+(i/j);
            if(x<=1000) {
                func[x]=min(func[x], 1+func[i]);
            }
        }
    }
    while(t--){
        cout<<solve()<<endl;
    }
}