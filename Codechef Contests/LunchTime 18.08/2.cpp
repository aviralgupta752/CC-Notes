#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> solve(vector<ll>& A, vector<ll>& B){
	int k=0;
	ll mi=INT_MAX;
	int n=A.size();
	queue<int> q;
	vector<ll> ans(n);

	for(ll i=0; i<n; i++){
		ll val=(A[k]+B[i])%n;
		mi=min(mi, val);
		ans[i]=(A[i]+B[i])%n;
	}
	for(ll i=0; i<n; i++){
		ll val=(A[k]+B[i])%n;
		if(val==mi){
			q.push(i);
		}
	}

	vector<ll> tmp(n);
	while(!q.empty()){
		int size=q.size();
		while(size--){
			int x=q.front();
			q.pop();
			for(ll j=0; j<n; j++){
				tmp[j]=(A[j]+B[(j+x)%n])%n;
			}
			for(ll j=0; j<n; j++){
				if(ans[j]>tmp[j]){
					ans=tmp;
					break;
				}
			}
			for(auto& x: ans)
				cout<<x<<" ";
			cout<<endl;
		}

		k+=1;
		mi=INT_MAX;
		for(ll i=0; i<n; i++){
			ll val=(A[k]+B[i])%n;
			mi=min(mi, val);
		}
		for(ll i=0; i<n; i++){
			ll val=(A[k]+B[i])%n;
			if(val==mi){
				q.push(i);
			}
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> A(n), B(n);
		for(ll i=0; i<n; i++){
			cin>>A[i];
		}
		for(ll i=0; i<n; i++){
			cin>>B[i];
		}
		
		vector<ll> ans=solve(A, B);
		for(auto& x: ans)
			cout<<x<<" ";
		cout<<endl;
	}
}