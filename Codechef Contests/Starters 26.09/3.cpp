#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll P,a,b,c,x,y;
		cin>>P>>a>>b>>c>>x>>y;
		cout<<max(P/(x*a+b), P/(y*a+c))<<endl;
	}
}