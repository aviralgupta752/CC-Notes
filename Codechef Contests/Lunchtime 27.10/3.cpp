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
		int n, v;
		cin>>n>>k;
		vector<int> nums(n*n);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>nums[n*i+j];
			}
		}
		sort(nums.begin(), nums.end());
		vector<int> cum=nums;
		for(int i=1; i<n*n; i++){
			cum[i]+=cum[i-1];
		}
		int i=n*2, ans=-1;
		// if(n%2==0){
			for(; i<n*n-2*n; i++){
				if(k<=cum[i+n-1]-cum[i-1]){
					ans=nums[i];
				}
			}
		// }
		// else{

		// }
			cout<<ans<<endl;
	}
}