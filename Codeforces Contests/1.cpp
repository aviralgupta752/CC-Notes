#include<bits/stdc++.h>
using namespace std;
// #define int long long
// #define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main(){
	// fastio;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int cab=0, cba=0;
		for(int i=1; i<n; i++){
			if(s[i]=='b' and s[i-1]=='a'){
				cab+=1;
			}
			else if(s[i]=='a' and s[i-1]=='b'){
				cba+=1;
			}
		}
		// cout<<cab<<" "<<cba<<endl;
		int diff = cab-cba;
		if(diff==0){
			cout<<s<<endl;
		}
		else if(diff>0){
			int i=n-1;
			while(i>=0){
				if(s[i]=='b'){
					s[i]='c';
					break;
				}
				i-=1;
			}
			cout<<s<<endl;
		}
		else{
			int i=0;
			while(i<n){
				if(s[i]=='a'){
					s[i]='c';
				}
				i+=1;
			}
			cout<<s<<endl;
		}
	}
}