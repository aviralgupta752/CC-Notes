#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums(n);
		for(int i=0; i<n; i++){
			cin>>nums[i];
		}
		if((nums[0]%2) and (nums[n-1]%2) and (n%2)){
			cout<<"Yes"<<endl;
		}
		else
			cout<<"No"<<endl;
	}
}