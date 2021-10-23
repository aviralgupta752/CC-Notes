#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, p, x, y;
		cin>>n>>p>>x>>y;
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin>>nums[i];
		}

		long long int ans=0;
		for(int i=0; i<=p; i++){
			if(nums[i]==0){
				ans+=x;
			}
			else{
				ans+=y;
			}
		}
		cout<<ans<<endl;
	}
}