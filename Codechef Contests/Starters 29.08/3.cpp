#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n), B(n);
		for(int i=0; i<n; i++){
			cin>>A[i];
		}
		for(int i=0; i<n; i++){
			cin>>B[i];
		}

		vector<int> v(31);
		for(int i=30; i>=0; i--){
			int num=(1<<i);
			for(int j=0; j<n; j++){
				if((num&A[j])!=0){
					v[i]+=1;
				}
			}
			for(int j=0; j<n; j++){
				if((num&B[j])!=0){
					v[i]+=1;
				}
			}
		}

		int id=0;
		for(int i=30; i>=0; i--){
			if(v[i]>=n){
				id=(1<<i);
				break;
			}
		}

		// cout<<id<<" ";
		int ans=INT_MAX, c=0;
		vector<int> fa;
		for(int i=0; i<n; i++){
			if((A[n-i-1]&id)!=0){
				fa.push_back(A[i]);
			}
		}
		for(int i=0; i<n and fa.size()<n; i++){
			if((B[n-i-1]&id)!=0){
				fa.push_back(B[i]);
				c+=1;
			}
		}
		
		for(int i=0; i<fa.size(); i++){
			// cout<<fa[i]<<" ";
			ans=(ans&fa[i]);
		}
		if(ans==INT_MAX)
			cout<<0<<" "<<0<<endl;
		else
			cout<<ans<<" "<<c<<endl;
	}
}