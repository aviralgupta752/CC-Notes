#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(ll n, ll d){
    ll c=0, ans=0, sm=0, i=1, tmp=n;
    // cout<<ans<<" ";

    while(n){
        ll val=n%10;
        n/=10;
        if(val==d){
            c+=1;
            ans=i-sm;
        }
        sm+=val*i;
        i*=10;
    }
    if(c==0){
        return 0;
    }
    return ans+solve(tmp+ans, d);
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, d;
		cin>>n>>d;
		cout<<solve(n, d)<<endl;
	}
}