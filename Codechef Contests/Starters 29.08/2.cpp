#include<bits/stdc++.h>
using namespace std;
#define int long long

// bool cmp(pair<int, int>& a, pair<int, int>& b){
// 	return a.second<b.second;
// }
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n), B(n-1);
		
		for(int i=0; i<n; i++){
			cin>>A[i];
		}

		for(int i=0; i<n-1; i++){
			cin>>B[i];
		}

		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		unordered_map<int, int> m;
		for(int i=0; i<n-1; i++){
			if(B[i]-A[i]>0)
				m[B[i]-A[i]]+=1;
			if(B[i]-A[i+1]>0)
				m[B[i]-A[i+1]]+=1;
		}

		vector<pair<int, int>> v;
		for(auto& x: m){
			v.push_back(x);
		}
		sort(v.begin(), v.end());

		int p=v.size(), ans=0, mxm=0;
		for(int i=0; i<p; i++){
			mxm=max(mxm, v[i].second);
		}
		for(int i=p-1; i>=0; i--){
			if(v[i].second==mxm){
				ans=v[i].first;
			}
		}
		cout<<ans<<endl;
	}
}