#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> gcd, pa;
int dfs(vector<vector<int>>& g, vector<int>& vis, int v, vector<int>& A){
	if(vis[v]==0){
		vis[v]=1;
	}
	int val=A[v];
	for(auto& x: g[v]){
		if(vis[x]==0){
			pa[x]=v;
			int t=dfs(g, vis, x, A);
			val = __gcd(val, t);
		}
	}
	return gcd[v]=val;
}
int func(vector<vector<int>>& g, int nv, vector<int>& A, int v, vector<int>& vis){
	if(v==-1){
		return 0;
	}
	int val=A[v];
	if(vis[v]==0){
		vis[v]=1;
	}
	for(auto& x: g[v]){
		if(vis[x]==0 and v!=nv){
			int t=func(g, nv, A, x, vis);
			val = __gcd(val, t);
		}
	}
	return val;
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a, b;
		vector<vector<int>> g(n);
		vector<int> vis(n), A(n);
		gcd.clear();
		gcd.resize(n);

		pa.clear();
		pa.resize(n, -1);
		for(int i=0; i<n-1; i++){
			cin>>a>>b;
			a-=1;
			b-=1;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		for(int i=0; i<n; i++){
			cin>>A[i];
		}

		dfs(g, vis, 0, A);
		// for(int i=0; i<n; i++){
		// 	cout<<pa[i]<<" ";
		// }
		int ans=0;
		for(int i=0; i<n; i++){
			// ans=max(ans, func(g, i, pa[i]));
			vis.clear();
			vis.resize(n);
			int val=0;
			for(auto& x: g[i]){
				if(x!=pa[i]){
					val+=gcd[x];
				}
			}
			ans=max(ans, func(g, i, A, pa[i], vis)+val);
		}
		cout<<ans<<endl;
	}
}