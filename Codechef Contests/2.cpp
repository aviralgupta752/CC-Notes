#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--)	{
		ll n;
		cin>>n;
		if(n==2){
			cout<<"-1 -1\n-1 -1"<<endl;
		}
		else{
			for(int i=0; i<n; i++){
				for(int j=0; j<n; j++){
					if(i==j)
						cout<<-1<<" ";
					else
						cout<<1<<" ";
				}
				cout<<endl;
			}
		}
	}
}