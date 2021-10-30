#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int32_t main(){
	fastio;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			cout<<".";
		}
		cout<<endl;
		for(int i=0; i<n; i++){
			if(i==1){
				cout<<"Q";
			}
			else
				cout<<".";
		}
		cout<<endl;
		for(int i=0; i<n; i++){
			cout<<".";
		}
		cout<<endl;

		int k=3;
		for(int i=0; i<n-3; i++){
			for(int j=0; j<k; j++){
				cout<<".";
			}
			cout<<"Q";
			for(int j=0; j<n-k-1; j++){
				cout<<".";
			}
			k+=1;
			cout<<endl;
		}
	}
}