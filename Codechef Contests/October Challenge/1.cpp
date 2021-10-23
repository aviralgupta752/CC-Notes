#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll val=log2(n);
		ll val2=1<<val;
		// cout<<val<<" "<<val2<<endl;
		cout<<max(n-val2+1, val2/2)<<endl;
	}
}