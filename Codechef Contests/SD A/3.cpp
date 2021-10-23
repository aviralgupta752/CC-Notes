#include<bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int ga=(n*(n-1))/2, val=(n-k-1);
		// cout<<(ga/k)*2<<endl;
		int lo=0, hi=n-1, ans=0;
		while(lo<=hi){
			int mid=(lo+hi)/2;
			if(k*mid<=ga and mid>=ga-val*(val+1)/2){
				ans=mid;
				lo=mid+1;
			}
			else{
				hi=mid-1;
			}
		}
		cout<<ans*2<<endl;
	}
}