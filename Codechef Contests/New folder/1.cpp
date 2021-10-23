#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;

		ll ans=0;
		unordered_map<int, int> m, m2;
		vector<int> v1(n), v2(n);
		for(int i=0; i<n; i++){
			v1[i]=(s[i]-'0')-i;
			m[v1[i]]+=1;
		}
		for(auto& x: m){
			int val=x.second;
			ans+=(val*(val-1)/2);
		}
		for(int i=0; i<n; i++){
			v2[i]=(s[i]-'0')+i;
			m2[v2[i]]+=1;
		}
		for(auto& x: m2){
			int val=x.second;
			ans+=(val*(val-1)/2);
		}
		cout<<ans<<endl;
	}
}