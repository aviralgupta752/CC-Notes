#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--)	{
		ll n, s;
		cin>>n>>s;
		ll ans=n*(n+1)/2-s;
		if(ans>=1 and ans<=n){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}