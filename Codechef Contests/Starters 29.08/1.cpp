#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> v(n);

		int ans=0;
		for(int i=0; i<n; i++){
			cin>>v[i];
			if(v[i]>=0){
				ans+=v[i];
			}
		}

		sort(v.begin(), v.end());
		int i=0;
		while(k--){
			if(v[i]<0){
				ans+=abs(v[i]);
				i+=1;
			}
			else
				break;
		}
		cout<<ans<<endl;
	}
}