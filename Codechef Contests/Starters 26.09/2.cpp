#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		char val='1';
		int c=0;
		for(int i=0; i<n; i++){
			if(s[i]!=val){
				c+=1;
				val='0'+(val-'0'+1)%2;
			}
		}
		cout<<c<<endl;
	}
}