#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(vector<ll> nums, ll k){
	ll n=nums.size();
	vector<vector<ll>> dp(n+1, vector<ll>(k+1));

	unordered_map<int, int> m;
	vector<int> maxf(n);
	int mxm=0;
	for(int i=0; i<n; i++){
		m[nums[i]]+=1;
		mxm=max(mxm, m[nums[i]]);
		maxf[i]=mxm;
	}
	ll ans=0;
	for(ll i=0; i<=n; i++){
		for(ll j=0; j<=k; j++){
			if(i==0){
				dp[i][j]=0;
			}
			else if(j==0){
				dp[i][j]=maxf[i-1];
			}
			else if(nums[i]==nums[i-1]){
				dp[i][j]=1+dp[i-1][j];
			}
			else{
				dp[i][j]=max(maxf[i]+ans, 1+dp[i-1][j-1]);
			}
			cout<<dp[i][j]<<" ";
			ans=max(ans, dp[i][j]);
		}
		cout<<endl;
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		vector<ll> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		cout<<solve(v, k)<<endl;
	}
}