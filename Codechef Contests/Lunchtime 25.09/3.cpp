#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
unordered_map<ll, bool> dp, vis;
bool solve(ll n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	if(vis[n]){
		return dp[n];
	}
	vis[n]=1;
	if(n%2==1){
		return dp[n]=1-solve(n-1);
	}

	bool ans=false;
	for(int i=1; i<32; i++){
		ll val=(1<<i);
		if(n%val==0){
			ans=(ans or (1-solve(n/val)));
		}
	}
	if(ans==1)
		return dp[n]=dp[n/2];
	return dp[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<string> ans={"Alice", "Bob"};
		cout<<ans[solve(n)]<<endl;
	}
}