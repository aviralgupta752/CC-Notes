#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}

		deque<int> q;
		long long int curr=0;
		for(int i=n-1; i>=0; i--){
			curr=(q.empty()?0:v[q.front()]);
			while(!q.empty() and curr<v[q.back()]){
				q.pop_back();
			}
			q.push_back(i);

			if(q.front()>=i+k){
				q.pop_front();
			}
			// v[i]=curr;
			// cout<<v[i]<<" ";
		}
		// cout<<endl;
		cout<<curr<<endl;
	}
}