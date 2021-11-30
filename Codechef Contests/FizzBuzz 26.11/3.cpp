#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int func(int n, int m){
    if(m==0){
        return n*(n+1)/2;
    }
    else if(m>=n/2){
        return n-m;
    }
    else{
        int ans=0, co=n-m;
        m+=1;
        int p=co/m+1;
        int ex=co%m;
        ans+=(p*(p+1)/2)*ex;
        p-=1;
        ans+=(p*(p+1)/2)*(m-ex);
        return ans;
    }
}
int32_t main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        cout<<func(n, m)<<"\n";
    }
}