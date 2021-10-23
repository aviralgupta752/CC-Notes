#include<bits/stdc++.h>
using namespace std;
int combi(int n, int r){

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		vector<int> v(n);
		vector<int> even(n+1), odd(n+1);
		int e=0, o=0;
		for(int i=0; i<n; i++){
			cin>>v[i];
			if(v[i]%2==0){
				e+=1;
			}
			else{
				o+=1;
			}
			even[i+1]=e;
			odd[i+1]=o;
		}
		for(int i=0; i<q; i++){
			int l, r;
			cin>>l>>r;
			int ce=even[r]-even[l-1];
			int co=odd[r]-odd[l-1];

			long long int ans=(ce*(ce-1)*(ce-2)/6) + (co*(co-1))*ce/2;
			cout<<ans<<endl;
		}
	}
}