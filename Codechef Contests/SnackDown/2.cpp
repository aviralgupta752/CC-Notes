#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		vector<int> v(5);
		unordered_map<int, int> m;
		for(int i=0; i<5; i++){
			cin>>v[i];
			m[v[i]]+=1;
		}
		if(m[1]>m[2]){
			cout<<"INDIA"<<endl;
		}
		else if(m[2]>m[1]){
			cout<<"ENGLAND"<<endl;
		}
		else{
			cout<<"DRAW"<<endl;
		}
	}
}