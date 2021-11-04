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
		int n;
		cin>>n;
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin>>nums[i];
		}
		cout<<nums[0]&nums[1]<<" ";
		for(int i=1; i<n-1; i++){
			if((nums[i]&nums[i-1])>(nums[i]&nums[i+1])){
				cout<<(nums[i]&nums[i-1])<<" ";
			}
			else{
				cout<<(nums[i]&nums[i+1])<<" ";	
			}
		}
		if(n>2)
			cout<<nums[n-2]&nums[n-1]<<endl;
	}
}