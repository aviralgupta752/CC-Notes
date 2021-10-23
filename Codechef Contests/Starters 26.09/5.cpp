#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<int> a(n), b(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			cin>>b[i];
		}

		map<ll, vector<ll>> x, y;
		for(ll i=0; i<n; i++){
			x[a[i]].push_back(i);
			y[b[i]].push_back(i);
		}
		ll ans=0;
		for(auto& node: x){
			ll v1=node.first;
			vector<ll> v2=node.second;
			ll sum=0, m=v2.size();
			for(int i=0; i<m; i++){
				sum+=(y[v1][m-1-i]-v2[i]);
			}
			ans+=(sum*v1);
		}
		cout<<ans<<endl;
	}
}