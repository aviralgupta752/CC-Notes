#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--)	{
		ll n, k, ans=0;
		cin>>n>>k;
		// vector<ll> nums={0,0,0,2,0,0,0,5};
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin>>nums[i];
			ans+=nums[i];
		}
		vector<int> tmp;
		for(int i=0; i<3; i++){
			for(auto& x: nums){
				tmp.push_back(x);
			}
		}

		vector<ll> dist(3*n);
		ll id=INT_MAX;
		for(int i=0; i<3*n; i++){
			if(tmp[i]>0){
				id=i;
			}
			else{
				if(id==INT_MAX){
					dist[i]=INT_MAX;
				}
				else
					dist[i]=i-id;
			}
		}
		id=INT_MAX;
		for(int i=3*n-1; i>=0; i--){
			if(tmp[i]>0){
				id=i;
			}
			else{
				if(id==INT_MAX){
					dist[i]=INT_MAX;
				}
				else
					dist[i]=min(dist[i], id-i);
			}
		}
		dist=vector<ll>(dist.begin()+n, dist.begin()+2*n);
		// for(auto& x: dist){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;
		for(int i=0; i<n; i++){
			ll val=2*(k-dist[i]);
			ans+=((val>=0)?val: 0);
		}
		cout<<ans<<endl;
	}
}