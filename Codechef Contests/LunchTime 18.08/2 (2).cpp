#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}

		sort(v.begin(), v.end());
		int last=v.back();
		int ans=0;
		for(int i=0; i<n; i++){
			ans=ans|(v[i]^last);
		}
		cout<<last<<" "<<ans<<endl;
	}
}