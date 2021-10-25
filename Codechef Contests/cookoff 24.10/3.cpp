#include<bits/stdc++.h>
using namespace std;
#define int long long
bool func(unordered_map<int, int>& m, int n){
	for(auto& x: m){
		if(x.first<=n+1){
			if(x.second==x.first-1){
				return 1;
			}
		}
		else{
			if(x.second==2*n+2-x.first-1){
				return 1;
			}
		}
	}
	return 0;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n, x, y;
		cin>>n;
		unordered_map<int, int> m;
		for(int i=0; i<n; i++){
			cin>>x>>y;
			m[x+y]+=1;
		}
		if(func(m, n)){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
		
	}
	return 0;
}