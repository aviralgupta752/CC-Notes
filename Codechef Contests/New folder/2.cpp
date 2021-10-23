#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll func(ll a, ll b, ll n){
	map<ll, ll> m;
	ll tmp=n;
	for(int i=2; i*i<=n; i++){
		while(n%i==0){
			m[i]++;
			n/=i;
		}
	}
	if(n>1){
		m[n]++;
		n=1;
	}
	ll ans=0;
	ll ce=0, co=0;
	for(auto& x: m){
		if(x.first%2==0){
			ce+=x.second;
		}
		else{
			co+=x.second;
		}
	}

	if (a >= 0 && b >= 0){
		ans = (a * ce) + (b * co);
	}
	else if (a < 0 && b >= 0){
		if (ce)
			ans += a;
		ans += (co * b);
	}
	else if (a >= 0 && b < 0){
		if (ce)
			ans += (ce * a);
		else
			ans += b;
	}
	else{
		if (tmp % 2)
			ans += b;
		else
			ans += a;
	}
	return ans;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, a, b;
		cin>>n>>a>>b;
		cout<<func(a, b, n)<<endl;
	}
}