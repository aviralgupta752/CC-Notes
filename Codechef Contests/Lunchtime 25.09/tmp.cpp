#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	ll n=1e5+1;
	vector<ll> dp(n);
	for(int i=2; i<n; i++){
	    if(i%2==1){
	        dp[i]=1-dp[i-1];
	        continue;
	    }
		int j=2, found=0;
		while(j<=i){
			if(i%j==0 and dp[i/j]==1){
				found=1;
				break;
			}
			j=(j<<1);
		}
		if(!found){
			dp[i]=1-dp[i/2];
		}
	}
	while(t--){
		ll n;
		cin>>n;
		if(dp[n]==0){
			cout<<"Alice"<<endl;
		}
		else{
			cout<<"Bob"<<endl;
		}
	}
}