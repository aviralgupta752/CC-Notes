#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m, l;
		cin>>n>>m>>l;
		
		map<int, int> rep;
		for(int i=0; i<m; i++){
			int k; 
			cin>>k;
			vector<int> v(k);
			for(int j=0; j<k; j++){
				cin>>v[j];
				rep[v[j]]=v[0];
			}
		}
		
		vector<int> tmp(l);
		for(int i=0; i<l; i++){
			cin>>tmp[i];
			tmp[i]=rep[tmp[i]];
		}

		int ans=0;
		for(int i=0; i<l; i++){
			ans+=1;
			while(i<l and tmp[i]==tmp[i+1]){
				i+=1;
			}
		}
		cout<<ans<<endl;
	}
}