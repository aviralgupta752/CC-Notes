#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int> nums(n);
		unordered_map<int, int> m;
		int ans=0;
		for(int i=0; i<n; i++){
			cin>>nums[i];
			m[i-nums[i]]+=1;
			ans=max(ans, m[i-nums[i]]);
		}
		cout<<ans<<endl;
	}
}