#include<bits/stdc++.h>
using namespace std;
#define int long long 
int func(vector<int> nums){
	sort(nums.begin(), nums.end());
	int ans=LLONG_MAX;
	int n=nums.size();
	
	int sm=nums[0]+nums[n-1];
	set<int> s;
	for(int i=0; i<n; i++){
		auto it=s.lower_bound(sm-nums[i]);
		if(it!=s.end()){
			ans=min(ans, abs(sm-nums[i]-*it));
			advance(it, 1);
			if(it!=s.end()){
				ans=min(ans, abs(sm-nums[i]-*it));
			}
		}
		s.insert(nums[i]);
	}
	return ans;
	// int i=0, j=n-1;
	// while(i<=j){
	// 	ans=min(ans, abs(nums[n-1]+nums[0])-);
	// }
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
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin>>nums[i];
		}
		cout<<func(nums)<<endl;
	}
}