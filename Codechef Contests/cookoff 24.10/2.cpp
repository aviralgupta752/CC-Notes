#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> nums(n), even, odd;
		for(int i=0; i<n; i++){
			cin>>nums[i];
			if(i%2==0){
				even.push_back(nums[i]);
			}
			else{
				odd.push_back(nums[i]);
			}
		}
		sort(even.rbegin(), even.rend());
		sort(odd.begin(), odd.end());

		vector<int> ans;
		int e=0, o=0;
		for(int i=0; i<n; i++){
			if(i%2==0){
				ans.push_back(even[e++]);
			}
			else{
				ans.push_back(odd[o++]);	
			}
		}

		for(int i=1; i<even.size(); i++){
			even[i]+=even[i-1];
		}

		for(int i=0; i<n; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;

		int k=0;
		int fa=0;
		for(int i=0; i<odd.size() and k<even.size(); i++){
			fa+=even[k++]*odd[i];
		}
		cout<<fa<<endl;
	}
	return 0;
}