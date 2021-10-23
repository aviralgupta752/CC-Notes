#include<bits/stdc++.h>
using namespace std;
#define int long long int
typedef pair<int, int> pit;
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n, m, x, y;
		cin>>n>>m;
		vector<vector<int>> g(n);
		for(int i=0; i<m; i++){
			cin>>x>>y;
			g[x-1].push_back(y-1);
			g[y-1].push_back(x-1);
		}

		vector<int> ans(n), v(n), tmp(n), vis(n);
		int val=n;
		// priority_queue<pit, vector<pit>, greater<pit>> pq, tmppq;
		set<pit> pq;
		for(int i=0; i<n; i++){
			tmp[i] = g[i].size();
			pq.insert({tmp[i], i});
		}
		while(!pq.empty()){
			pit node = *pq.begin();
			// cout<<node.second<<" ";
			ans[node.second] = node.first;
			v[node.second] = val--;
			vis[node.second] = 1;

			for(auto& x: g[node.second]){
				if(vis[x]==0){
					pq.erase(pq.find({tmp[x], x}));
					if(tmp[x]>0)
						tmp[x]-=1;
					pq.insert({tmp[i], i});
				}
			}
		}

		int fa = *max_element(ans.begin(), ans.end()) - *min_element(ans.begin(), ans.end());
		cout<<fa<<"\n";
		for(int i=0; i<n; i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
}