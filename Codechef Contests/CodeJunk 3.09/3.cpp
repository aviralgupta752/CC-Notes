#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n, mod=1e9+7;
	cin>>n;
	if(n==1){
		cout<<4<<endl;
	}
	else{
		vector<int> v(n+1), t(n+1);
		v[0]=1;
		// t[0]=1;
		for(int i=1; i<=n; i++){
			v[i]=(4*v[i-1])%mod;
			// t[i]=(3*t[i-1])%mod;
		}
		// cout<<v[3]<<" "<<t[4]<<endl;
		int ans=(v[n] - v[n-1] + 2)%mod;
		cout<<ans<<endl;
	}
}