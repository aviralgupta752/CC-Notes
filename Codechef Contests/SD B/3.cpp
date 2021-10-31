#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int32_t main(){
	fastio;
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		cout<<2*((-1+sqrt(1+8*k))/2+1)<<endl;
	}
}