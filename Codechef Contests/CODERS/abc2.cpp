#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin>>nums[i];
		}
		sort(nums.rbegin(), nums.rend());
		int ans=0;
		for(int i=n-1; i>=0; i--){
			if(nums[i]>0){
				if(i!=n-1){
					ans=i+1;
					break;
				}
				else{
					ans=n*nums[i];
					while(i-1>=0 and nums[i-1]==nums[i]){
						i-=1;
					}
					ans+=i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
}