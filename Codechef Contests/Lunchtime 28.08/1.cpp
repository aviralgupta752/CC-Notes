#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> nums(n);
		int mxm=INT_MIN;
		for(int i=0; i<n; i++)
		{
			cin>>nums[i];
			mxm=max(mxm, nums[i]);
		}

		long long int ans=0;
		for(int i=0; i<=n-k; i++){
			if(nums[i+k-1]==mxm){
				ans+=1LL*(n-(i+k-1));
			}
		}
		cout<<ans<<endl;
	}
}