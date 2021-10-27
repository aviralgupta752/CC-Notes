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
		int n, v;
		cin>>n>>v;
		if(v>=n-1){
			cout<<n*(n-1)/2<<" "<<n-1<<endl;
		}
		else{
			cout<<v-1+(n-v)*(n-v+1)/2<<endl;
		}
	}
}