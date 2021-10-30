#include<bits/stdc++.h>
using namspace std;
#define int long long
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<1<<" ";
		for(int i=0; i<n; i++){
			cout<<(1<<i)<<" ";
		}
		cout<<endl;
	}
}