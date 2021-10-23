#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		string s;

		cin>>n>>k;
		cin>>s;
		string ns="";
		int val=1;
		if(s[0]=='1'){
			val=0;
		}
		for(int i=0; i<k; i++){
			ns+=('0'+(val%2));
			val+=1;
		}
		int j=0;
		for(int i=1; i<n and j<n; i++){
			if(s[i]==ns[j]){
				j+=1;
			}
		}
		if(j==k){
			for(int i=n-1; i>=0; i--){
				if(s[i]==ns.back()){
					cout<<i+1<<endl;
					break;
				}
			}
		}
		else{
			cout<<-1<<endl;
		}
	}
}