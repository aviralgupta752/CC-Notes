#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll sum=n*(n+1)/2;
		if(sum%2){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			vector<int> a, b;
			for(int i=1; i<=n/2; i++){
				if(i%2==1){
					a.push_back(i);
					a.push_back(n+1-i);
				}
				else{
					b.push_back(i);
					b.push_back(n+1-i);
				}
			}
			for(auto& x: a){
				cout<<x<<" ";
			}
			cout<<endl;
			for(auto& x: b){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
