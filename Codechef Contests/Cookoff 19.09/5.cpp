#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	int lim=700000;
	vector<int> prime(lim, 1);

	for(int i=2; i*i<lim; i++){
		if(prime[i]==1){
			for(int j=i*i; j<lim+5; j++){
				prime[j]=0;
			}
		}
	}
	while(t--){
		ll n;
		cin>>n;
		vector<ll> nums(n), v;
		for(ll i=0; i<n; i++){
			cin>>nums[i];
			if(nums[i]%2==0){
				v.push_back(nums[i]/2);
			}
		}
		
		ll k=ceil((float)n/2);
		
		bool tmp=0;
		for(auto& x: v){
			if(prime[x]==1){
				k-=1;
				if(k==0){
					cout<<"YES"<<endl;
					tmp=1;
					break;
				}
			}
		}
		if(tmp==0){
			cout<<"NO"<<endl;
		}
	}
}