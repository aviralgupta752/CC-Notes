#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool func(ll b, int i, ll a){
	bool res=1;
	b=b%a;
	if(b==0){
		return 0;
	}
	while(i>0){
		if(i%2){
			res=(res*b)%a;
		}
		i=(i>>1);
		b=(b*b)%a;
	}
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		if(a==1){
			cout<<"YES"<<endl;
		}
		else{
			int tmp=0;
			for(int i=1; i<100; i++){
				if(func(b, i, a)==0){
					cout<<"YES"<<endl;
					tmp=1;
					break;
				}
			}
			if(tmp==0){
				cout<<"NO"<<endl;
			}
		}
	}
}