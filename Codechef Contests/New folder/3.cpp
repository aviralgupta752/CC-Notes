#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll tmp=n;
		vector<int> ans;
		vector<int> v;
		while(tmp){
			v.push_back(tmp%2);
			tmp/=2;
		}
		reverse(v.begin(), v.end());
		int p=v.size();
		p-=1;

		for(int i=p; i>=0; i--){
			int val=(1<<i);
			if(val&n){
				ans.push_back(val+(val-1));
				n-=val;
				n^=(val-1);
			}
		}
		cout<<ans.size()<<endl;
		for(auto& x: ans){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}