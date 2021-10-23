#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums(n), ans;
		for(int i=0; i<n; i++){
			cin>>nums[i];
		}
		for(int i=0; i<n; i++){
			if(nums[i]%2==0){
				ans.push_back(nums[i]);
			}
		}
		for(int i=0; i<n; i++){
			if(nums[i]%2==1){
				ans.push_back(nums[i]);
			}
		}
		int val=0;
		for(int i=0; i<n-1; i++){
			val+=abs(ans[i]-ans[i+1]);
		}
		
		if(val%2==0){
			cout<<-1<<endl;
		}
		else{
			for(auto& x: ans){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}