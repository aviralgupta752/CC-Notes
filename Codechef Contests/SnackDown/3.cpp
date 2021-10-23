#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> nums(n), copy(n);
		for(ll i=0; i<n; i++){
			cin>>nums[i];
			copy[i]=nums[i];
		}
		
		sort(nums.begin(), nums.rend());

		unordered_map<ll, ll> m;
		unordered_map<ll, stack<int>> arr;

		for(ll i=0; i<n; i++)
		{
			ll lo=0, hi=nums[i]-1, val=-1;
			while(lo<=hi)
			{
				ll mid=(lo+hi)/2;
				if(m[mid]==1){
					hi=mid-1;
				}
				else{
					val=mid;
					lo=mid+1;
				}
			}
			if(val==-1){
				// ans.push_back(0);
				arr[nums[i]].push(0);
			}
			else{
				m[val]=1;
				// ans.push_back(val);
				arr[nums[i]].push(val);
			}
		}
		for(int i=0; i<n; i++){
			cout<<arr[copy[i]].top()<<" ";
			arr[copy[i]].pop();
		}
		cout<<endl;
	}
}