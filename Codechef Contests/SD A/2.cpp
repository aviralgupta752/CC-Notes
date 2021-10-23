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
		int x, k;
		cin>>x>>k;
		cout<<2*x<<" "<<(x*k)*(x*k-1)<<endl;
	}
}