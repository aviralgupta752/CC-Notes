#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll x, y;
		cin>>x>>y;
		if(x%2==0 and y%2==0)
			cout<<0<<endl;
		else if((x%2==1 and y%2==0) or (x%2==0 and y%2==1))
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
}