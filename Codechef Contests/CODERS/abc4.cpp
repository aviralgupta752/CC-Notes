#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<vector<int>> v(26);
		for(int i=0; i<n; i++){
			v[s[i]-'A'].push_back(i);
		}
		int ans=0;
		for(int i=0; i<26; i++){
			int val=0, p=v[i].size();
			if(p){
				val+=((v[i][0]==0)?0:1) + ((v[i][p-1]==n-1)?0:1);
			}
			for(int j=1; j<p; j++){
				val+=(v[i][j]-v[i][j-1]-1);
			}
			if(val<=k){
				ans=max(ans, p);
			}
		}
		cout<<ans<<endl;
	}
}