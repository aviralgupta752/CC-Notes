#include<bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int x, y;
		cin>>x>>y;
		// if((y-x)%2==0)
		// 	cout<<abs(y-x)/2<<endl;
		// else
		// 	cout<<ceil(abs(y-x)/2.0)+1<<endl;
		queue<pair<int, int>> q;
		q.push(x);
		while(!q.empty()){
			pair<int, int> node=q.front();
			q.pop();
			if(node.first==y){
				cout<<node.second<<endl;
				break;
			}
			q.push({node.first-1, 1+node.second});
			q.push({node.first+2, 1+node.second});
		}
	}
}