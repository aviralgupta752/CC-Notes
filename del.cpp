#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n=1e7;
vector<int> prime;
int calc(vector<int>& v, int k){
    if(k<=3){
        return k-1;
    }
    auto it=lower_bound(v.begin(), v.end(), k)-v.begin()-1;
    int ans=k-it;
    if(prime[k-1]==1){
        ans+=1;
    }
    return ans;
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    vector<int> v;
    prime.resize(n+1, 1);
    for(int i=2; i*i<=n; i++){
        if(prime[i]==1){
            v.push_back(i);
            for(int j=2*i; j<=n; j+=i){
                prime[j]=0;
            }
        }
    }
    
    while(t--){
        int p, k;
        cin>>p>>k;
        
        cout<<calc(v, k)-calc(v, p)<<endl;
    }
}